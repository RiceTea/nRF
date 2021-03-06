
extern int timer_flag2;


/*
nRF24L01 Registers definition (5-bit)
*/
#define CONFIG 			0x00
#define EN_AA	 			0x01
#define EN_RXADDR 	0x02
#define SETUP_AW		0x03
#define SETUP_RETR 	0x04
#define RF_CH				0x05
#define RF_SETUP		0x06
#define STATUS			0x07
#define OBSERVE_TX	0x08
#define RPD					0x09
#define RX_ADDR_P0	0x0A
#define RX_ADDR_P1	0x0B
#define RX_ADDR_P2	0x0C
#define RX_ADDR_P3	0x0D
#define RX_ADDR_P4	0x0E
#define RX_ADDR_P5	0x0F
#define TX_ADDR			0x10
#define RX_PW_P0		0x11
#define RX_PW_P1		0x12
#define RX_PW_P2		0x13
#define RX_PW_P3		0x14
#define RX_PW_P4		0x15
#define RX_PW_P5		0x16
#define FIFO_STATUS	0x17

/*nRF Command Definition*/
#define R_REGISTER					0x00
#define W_REGISTER					0x20
#define R_RX_PAYLOAD				0x61
#define W_TX_PAYLOAD				0xA0
#define FLUSH_TX						0xE1
#define FLUSH_RX						0xE2
#define REUSE_TX_PL					0xE3
#define R_RX_PL_WID					0x60
#define W_ACK_PAYLOAD				0xA8
#define W_TX_PAYLOAD_NOACK	0xB0
#define NOP									0xFF

/*nRF SPI Pins*/
#define SPI_GPIO_Port	GPIOB
#define SPI_CSN				GPIO_Pin_12
#define SPI_SCK 			GPIO_Pin_13
#define SPI_MISO 			GPIO_Pin_14
#define SPI_MOSI 			GPIO_Pin_15
#define SPI_CE 				GPIO_Pin_10



/*nRF Function Declaration*/
void nRF_Init();
void nRF_DeInit();
void nRF_WRITE(char command, char reg_val);
char nRF_READ(char command);
void nRF_RX_TX_MODE(void);			/*1 = RX; 0= TX*/
void CSN_LOW(void);
void CSN_HIGH(void);