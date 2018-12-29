#define MICROPY_HW_BOARD_NAME       "PROPOX MMSTM32F407"
#define MICROPY_HW_MCU_NAME         "STM32F407"

#define MICROPY_PY_LWIP             (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_ETH_RMII  (1)

// HSE is 25MHz
#define MICROPY_HW_CLK_PLLM (25)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)

// UART config
#define MICROPY_HW_UART1_TX     (pin_B6)
#define MICROPY_HW_UART1_RX     (pin_B7)
#define MICROPY_HW_UART2_TX     (pin_D5)
#define MICROPY_HW_UART2_RX     (pin_A3)
#define MICROPY_HW_UART2_RTS    (pin_D4)
#define MICROPY_HW_UART2_CTS    (pin_A0)
#define MICROPY_HW_UART3_TX     (pin_B10)
#define MICROPY_HW_UART3_RX     (pin_D9)
#define MICROPY_HW_UART3_RTS    (pin_B14)
#define MICROPY_HW_UART3_CTS    (pin_D11)
#define MICROPY_HW_UART6_TX     (pin_C6)
#define MICROPY_HW_UART6_RX     (pin_C7)

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B8)
#define MICROPY_HW_I2C1_SDA (pin_B9)
// #define MICROPY_HW_I2C2_SCL (pin_B10)
// #define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_A15)
#define MICROPY_HW_SPI1_SCK  (pin_A5)
#define MICROPY_HW_SPI1_MISO (pin_A6)
#define MICROPY_HW_SPI1_MOSI (pin_B5)
//#define MICROPY_HW_SPI2_NSS  (pin_B12)
#define MICROPY_HW_SPI2_SCK  (pin_B10)
#define MICROPY_HW_SPI2_MISO (pin_C2)
#define MICROPY_HW_SPI2_MOSI (pin_C3)
#define MICROPY_HW_SPI3_NSS  (pin_A15)
#define MICROPY_HW_SPI3_SCK  (pin_C10)
#define MICROPY_HW_SPI3_MISO (pin_C11)
#define MICROPY_HW_SPI3_MOSI (pin_C12)

// CAN busses
#define MICROPY_HW_CAN1_TX (pin_D1)
#define MICROPY_HW_CAN1_RX (pin_D0)
// #define MICROPY_HW_CAN2_TX (pin_B6)
// #define MICROPY_HW_CAN2_RX (pin_B5)

// LEDs
#define MICROPY_HW_LED1             (pin_C13)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_high(pin))

// SD card detect switch
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_E0)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
#define MICROPY_HW_USB_FS              (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_C9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// Ethernet RMII Interface
#define RMII_REF_CLK                (pin_A1)
#define RMII_MDIO                   (pin_A2)
#define RMII_MDC                    (pin_C1)
#define RMII_MII_CRS_DV             (pin_A7)
#define RMII_MII_RXD0               (pin_C4)
#define RMII_MII_RXD1               (pin_C5)
//#define RMII_MII_RXER               (pin_G2)
#define RMII_MII_TX_EN              (pin_B11)
#define RMII_MII_TXD0               (pin_B12)
#define RMII_MII_TXD1               (pin_B13)
