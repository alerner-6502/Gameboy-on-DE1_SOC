#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#include "hwlib.h"
#include "socal/socal.h"
#include "socal/hps.h"
#include "socal/alt_gpio.h" 

#include "hps_0.h"

#define HW_REGS_BASE ( ALT_STM_OFST )
#define HW_REGS_SPAN ( 0x04000000 )
#define HW_REGS_MASK ( HW_REGS_SPAN - 1 )

#define DATA_OFFSET 8

//==================== FUNCTIONS =====================

uint32_t adler32(unsigned char *data, size_t len){

    uint32_t a = 1, b = 0;
    size_t index;
    
    for (index = 0; index < len; ++index){
        a = (a + data[index]) % 65521;
        b = (b + a) % 65521;
    }
 
    return (b << 16) | a;
}

//==================== MAIN ==========================

int main(int argc, char *argv[]) {
	
	//=================== GET POINTERS ===============
	
	void *virtual_base;
	void *h2p_lw_led_addr;
	int fd;
	
	if( ( fd = open( "/dev/mem", ( O_RDWR | O_SYNC ) ) ) == -1 ) {
		printf( "ERROR: could not open \"/dev/mem\"...\n" );
		return( 1 );
	}

	virtual_base = mmap( NULL, HW_REGS_SPAN, ( PROT_READ | PROT_WRITE ), MAP_SHARED, fd, HW_REGS_BASE );

	if( virtual_base == MAP_FAILED ) {
		printf( "ERROR: mmap() failed!\n" );
		close( fd );
		return 1;
	}
	
	h2p_lw_led_addr = virtual_base + ( (uint32_t)(ALT_LWFPGASLVS_OFST + LED_PIO_BASE)    & (uint32_t)(HW_REGS_MASK) );

	//=================== ACCESS TO event0 ===============
	
	const char *device;
    int js;

    if (argc > 1) { device = argv[1];}
    else { device = "/dev/input/event0";}
	
	//==================== BUFFERS ======================
	
	unsigned char mybuffer[256];
	unsigned char packet_type;
	ssize_t  buffer_size, packet_size;
	uint32_t buffer_checksum;
	int i;
	
	uint32_t key_status;  // status of all keys
		
	//==================== MAIN LOOP =====================
	
	while(1){
		
		alt_write_word(h2p_lw_led_addr, 0x100); // initialize LEDs (all buttons to zero, no joystick connection)
		
		do{ sleep(1); js = open(device, O_RDONLY);}while(js == -1);
		
		alt_write_word(h2p_lw_led_addr, 0x000); // initialize LEDs (all buttons to zero, joystick connected)
	
		key_status = 0;
		buffer_size  = 0;
		
		while(buffer_size >= 0) { // terminate if READ failed
		
			//---- calculate adler32 checksum for the read data (with nullified timestamps)
			
			buffer_size = read(js, mybuffer, 256);
			
			for(i = 0; i < buffer_size; i++){
				if(i%16 < 8){ mybuffer[i] = 0x00;}  // nullify timestap data!
			}
			
			i = 0;
			
			while(i < buffer_size){   // i will always point to the start of each packet 
			
				packet_type = mybuffer[i + DATA_OFFSET];
				
				if     (packet_type == 0x03){ packet_size = 16;}  // 16 byte controller packet (excluding zero packet!)
				else if(packet_type == 0x04){ packet_size = 32;}  // 32 byte controller/keyboard packet (excluding zero packet!)
				else if(packet_type == 0x01){ packet_size = 32;}  // 32 byte keyboard packet (button pressed continuously)
				else if(packet_type == 0x00){ packet_size = 16;}  // 16 byte ZERO PACKET (will always be found at the end of the buffer)
				else{ 
					packet_size = 16;
					printf("WARNING: Unexpected packet type: %d\n", packet_type);
				}
				
				if(packet_type == 0x03 || packet_type == 0x04){
					buffer_checksum = adler32(mybuffer + i, packet_size);
				}
				else { buffer_checksum = 0;}
				
				i = i + packet_size;
				
				//---- decode adler32 checksum and update key_status
				
				switch (buffer_checksum){
					
					//--------- standard gamepad codes
					
					case 0x002e0005 : key_status = key_status | 0x80; break;  // UP   (pressed)  
					case 0x042a0104 : key_status = key_status | 0x20; break;  // DOWN (pressed) 			
					case 0x022a0084 : key_status = key_status & 0x5F; break;  // UP and DOWN (released)                          

					case 0x00280004 : key_status = key_status | 0x40; break;  // LEFT  (pressed)  
					case 0x04240103 : key_status = key_status | 0x10; break;  // RIGHT (pressed) 			
					case 0x02240083 : key_status = key_status & 0xAF; break;  // LEFT and RIGHT (released)                                                     

					case 0x032f0046 : key_status = key_status | 0x08; break;  // SELECT (pressed)                           
					case 0x032b0045 : key_status = key_status & 0xF7; break;  // SELECT (released)                           

					case 0x03490048 : key_status = key_status | 0x04; break;  // START (pressed)                           
					case 0x03450047 : key_status = key_status & 0xFB; break;  // START (released)                           

					case 0x02790038 : key_status = key_status | 0x02; break;  // A (pressed)                           
					case 0x02750037 : key_status = key_status & 0xFD; break;  // A (released)                           

					case 0x025f0036 : key_status = key_status | 0x01; break;  // B (pressed)                           
					case 0x025b0035 : key_status = key_status & 0xFE; break;  // B (released)   

					//--------- standard usb keyboard codes	

					case 0x0a3400cb : key_status = key_status | 0x80; break;  // UP (pressed)  
					case 0x0a3000ca : key_status = key_status & 0x7F; break;  // UP (released)
					
					case 0x0a1800cb : key_status = key_status | 0x40; break;  // LEFT (pressed)
					case 0x0a1400ca : key_status = key_status & 0xBF; break;  // LEFT (released)
					
					case 0x0a3e00cf : key_status = key_status | 0x20; break;  // DOWN (pressed) 			
					case 0x0a3a00ce : key_status = key_status & 0xDF; break;  // DOWN (released)                          

					case 0x0a0a00cb : key_status = key_status | 0x10; break;  // RIGHT (pressed) 			
					case 0x0a0600ca : key_status = key_status & 0xEF; break;  // RIGHT (released)                                                     

					case 0x06280077 : key_status = key_status | 0x08; break;  // SELECT (pressed)                           
					case 0x06240076 : key_status = key_status & 0xF7; break;  // SELECT (released)                           

					case 0x052a0056 : key_status = key_status | 0x04; break;  // START (pressed)                           
					case 0x05260055 : key_status = key_status & 0xFB; break;  // START (released)                           

					case 0x02660034 : key_status = key_status | 0x02; break;  // A (pressed)                           
					case 0x02620033 : key_status = key_status & 0xFD; break;  // A (released)                           

					case 0x04ae005b : key_status = key_status | 0x01; break;  // B (pressed)                           
					case 0x04aa005a : key_status = key_status & 0xFE; break;  // B (released)  
					
					//--------- default

					default : break;
				}
				
				alt_write_word(h2p_lw_led_addr, key_status); // update LED's
			}
		}
		
		close(fd);
		close(js);
	}
	
	//=================== CLEAN UP CODE ==================
	
	return 0;
}



