#ifndef PLAT_H
#define PLAT_H

#define PLAT_MEM_BASE   (0x10000000)
#define PLAT_MEM_SIZE   (0x8000000)

#define PLAT_GICD_BASE_ADDR (0xfee00000)
#define PLAT_GICC_BASE_ADDR (0xfff00000)

#define PLAT_UART_ADDR  (0xff1a0000)
#define UART_IRQ_ID     (100)

#endif /* PLAT_H */