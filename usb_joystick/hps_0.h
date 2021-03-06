#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file './soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'onchip_memory2_0', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'ONCHIP_MEMORY2_0_'.
 * The prefix is the slave descriptor.
 */
#define ONCHIP_MEMORY2_0_COMPONENT_TYPE altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_COMPONENT_NAME onchip_memory2_0
#define ONCHIP_MEMORY2_0_BASE 0x0
#define ONCHIP_MEMORY2_0_SPAN 65536
#define ONCHIP_MEMORY2_0_END 0xffff
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE soc_system_onchip_memory2_0
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID NONE
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE AUTO
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE DONT_CARE
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 65536
#define ONCHIP_MEMORY2_0_WRITABLE 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_DAT_SYM 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_GENERATE_HEX 1
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HAS_BYTE_LANE 0
#define ONCHIP_MEMORY2_0_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_DATA_WIDTH 64
#define ONCHIP_MEMORY2_0_MEMORY_INFO_MEM_INIT_FILENAME soc_system_onchip_memory2_0

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0x10000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0x10007
#define SYSID_QSYS_ID 2899645186
#define SYSID_QSYS_TIMESTAMP 1642514620

/*
 * Macros for device 'led_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'LED_PIO_'.
 * The prefix is the slave descriptor.
 */
#define LED_PIO_COMPONENT_TYPE altera_avalon_pio
#define LED_PIO_COMPONENT_NAME led_pio
#define LED_PIO_BASE 0x10040
#define LED_PIO_SPAN 16
#define LED_PIO_END 0x1004f
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 10
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE NONE
#define LED_PIO_FREQ 50000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ_TYPE NONE
#define LED_PIO_RESET_VALUE 15

/*
 * Macros for device 'hex10_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'HEX10_PIO_'.
 * The prefix is the slave descriptor.
 */
#define HEX10_PIO_COMPONENT_TYPE altera_avalon_pio
#define HEX10_PIO_COMPONENT_NAME hex10_pio
#define HEX10_PIO_BASE 0x10050
#define HEX10_PIO_SPAN 16
#define HEX10_PIO_END 0x1005f
#define HEX10_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define HEX10_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX10_PIO_CAPTURE 0
#define HEX10_PIO_DATA_WIDTH 16
#define HEX10_PIO_DO_TEST_BENCH_WIRING 0
#define HEX10_PIO_DRIVEN_SIM_VALUE 0
#define HEX10_PIO_EDGE_TYPE NONE
#define HEX10_PIO_FREQ 50000000
#define HEX10_PIO_HAS_IN 0
#define HEX10_PIO_HAS_OUT 1
#define HEX10_PIO_HAS_TRI 0
#define HEX10_PIO_IRQ_TYPE NONE
#define HEX10_PIO_RESET_VALUE 0

/*
 * Macros for device 'hex32_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'HEX32_PIO_'.
 * The prefix is the slave descriptor.
 */
#define HEX32_PIO_COMPONENT_TYPE altera_avalon_pio
#define HEX32_PIO_COMPONENT_NAME hex32_pio
#define HEX32_PIO_BASE 0x10060
#define HEX32_PIO_SPAN 16
#define HEX32_PIO_END 0x1006f
#define HEX32_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define HEX32_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX32_PIO_CAPTURE 0
#define HEX32_PIO_DATA_WIDTH 16
#define HEX32_PIO_DO_TEST_BENCH_WIRING 0
#define HEX32_PIO_DRIVEN_SIM_VALUE 0
#define HEX32_PIO_EDGE_TYPE NONE
#define HEX32_PIO_FREQ 50000000
#define HEX32_PIO_HAS_IN 0
#define HEX32_PIO_HAS_OUT 1
#define HEX32_PIO_HAS_TRI 0
#define HEX32_PIO_IRQ_TYPE NONE
#define HEX32_PIO_RESET_VALUE 0

/*
 * Macros for device 'hex54_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'HEX54_PIO_'.
 * The prefix is the slave descriptor.
 */
#define HEX54_PIO_COMPONENT_TYPE altera_avalon_pio
#define HEX54_PIO_COMPONENT_NAME hex54_pio
#define HEX54_PIO_BASE 0x10070
#define HEX54_PIO_SPAN 16
#define HEX54_PIO_END 0x1007f
#define HEX54_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define HEX54_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX54_PIO_CAPTURE 0
#define HEX54_PIO_DATA_WIDTH 16
#define HEX54_PIO_DO_TEST_BENCH_WIRING 0
#define HEX54_PIO_DRIVEN_SIM_VALUE 0
#define HEX54_PIO_EDGE_TYPE NONE
#define HEX54_PIO_FREQ 50000000
#define HEX54_PIO_HAS_IN 0
#define HEX54_PIO_HAS_OUT 1
#define HEX54_PIO_HAS_TRI 0
#define HEX54_PIO_IRQ_TYPE NONE
#define HEX54_PIO_RESET_VALUE 0

/*
 * Macros for device 'dipsw_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'DIPSW_PIO_'.
 * The prefix is the slave descriptor.
 */
#define DIPSW_PIO_COMPONENT_TYPE altera_avalon_pio
#define DIPSW_PIO_COMPONENT_NAME dipsw_pio
#define DIPSW_PIO_BASE 0x10080
#define DIPSW_PIO_SPAN 16
#define DIPSW_PIO_END 0x1008f
#define DIPSW_PIO_IRQ 0
#define DIPSW_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define DIPSW_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIPSW_PIO_CAPTURE 1
#define DIPSW_PIO_DATA_WIDTH 10
#define DIPSW_PIO_DO_TEST_BENCH_WIRING 0
#define DIPSW_PIO_DRIVEN_SIM_VALUE 0
#define DIPSW_PIO_EDGE_TYPE ANY
#define DIPSW_PIO_FREQ 50000000
#define DIPSW_PIO_HAS_IN 1
#define DIPSW_PIO_HAS_OUT 0
#define DIPSW_PIO_HAS_TRI 0
#define DIPSW_PIO_IRQ_TYPE EDGE
#define DIPSW_PIO_RESET_VALUE 0

/*
 * Macros for device 'button_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'BUTTON_PIO_'.
 * The prefix is the slave descriptor.
 */
#define BUTTON_PIO_COMPONENT_TYPE altera_avalon_pio
#define BUTTON_PIO_COMPONENT_NAME button_pio
#define BUTTON_PIO_BASE 0x10090
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_END 0x1009f
#define BUTTON_PIO_IRQ 1
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_EDGE_TYPE FALLING
#define BUTTON_PIO_FREQ 50000000
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_IRQ_TYPE EDGE
#define BUTTON_PIO_RESET_VALUE 0

/*
 * Macros for device 'gpio0_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'GPIO0_PIO_'.
 * The prefix is the slave descriptor.
 */
#define GPIO0_PIO_COMPONENT_TYPE altera_avalon_pio
#define GPIO0_PIO_COMPONENT_NAME gpio0_pio
#define GPIO0_PIO_BASE 0x100a0
#define GPIO0_PIO_SPAN 32
#define GPIO0_PIO_END 0x100bf
#define GPIO0_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO0_PIO_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO0_PIO_CAPTURE 0
#define GPIO0_PIO_DATA_WIDTH 32
#define GPIO0_PIO_DO_TEST_BENCH_WIRING 0
#define GPIO0_PIO_DRIVEN_SIM_VALUE 0
#define GPIO0_PIO_EDGE_TYPE NONE
#define GPIO0_PIO_FREQ 50000000
#define GPIO0_PIO_HAS_IN 0
#define GPIO0_PIO_HAS_OUT 0
#define GPIO0_PIO_HAS_TRI 1
#define GPIO0_PIO_IRQ_TYPE NONE
#define GPIO0_PIO_RESET_VALUE 0

/*
 * Macros for device 'gpio1_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'GPIO1_PIO_'.
 * The prefix is the slave descriptor.
 */
#define GPIO1_PIO_COMPONENT_TYPE altera_avalon_pio
#define GPIO1_PIO_COMPONENT_NAME gpio1_pio
#define GPIO1_PIO_BASE 0x100c0
#define GPIO1_PIO_SPAN 32
#define GPIO1_PIO_END 0x100df
#define GPIO1_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO1_PIO_BIT_MODIFYING_OUTPUT_REGISTER 1
#define GPIO1_PIO_CAPTURE 0
#define GPIO1_PIO_DATA_WIDTH 32
#define GPIO1_PIO_DO_TEST_BENCH_WIRING 0
#define GPIO1_PIO_DRIVEN_SIM_VALUE 0
#define GPIO1_PIO_EDGE_TYPE NONE
#define GPIO1_PIO_FREQ 50000000
#define GPIO1_PIO_HAS_IN 0
#define GPIO1_PIO_HAS_OUT 0
#define GPIO1_PIO_HAS_TRI 1
#define GPIO1_PIO_IRQ_TYPE NONE
#define GPIO1_PIO_RESET_VALUE 0

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x20000
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x20007
#define JTAG_UART_IRQ 2
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


#endif /* _ALTERA_HPS_0_H_ */
