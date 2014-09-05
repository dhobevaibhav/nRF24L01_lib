#ifndef __NRF24L01_H
#define __NRF24L01_H

// ������� ���������� CS
#define nRF24L01_CS_SET
#define nRF24L01_CS_RESET


// �������������
void nRF24L01_init();
void nRF24L01_spi_init();

/**
* ������� �������
* @return ����� �� ������
**/
u8 nRF24L01_cmd_send(u8 reg, u8 cmd);

/**
* �������� ������ �� spi
* @return ���������� ������
**/
u8 spi_send(u8 data);

// �������� nRF24L01
enum nRF24L01_REG {
    CONFIG_REG = 0,
    EN_AA_REG,
    EN_RXADDR_REG,
    SETUP_AW_REG,
    SETUP_RETR_REG,
    RF_CH_REG,
    RF_SETUP_REG,
    STATUS_REG,
    OBSERVE_TX_REG,
    RPD_REG,
    RX_ADDR_P0_REG,
    RX_ADDR_P1_REG,
    RX_ADDR_P2_REG,
    RX_ADDR_P3_REG,
    RX_ADDR_P4_REG,
    RX_ADDR_P5_REG,
    TX_ADDR_REG,
    RX_PW_P0_REG,
    RX_PW_P1_REG,
    RX_PW_P2_REG,
    RX_PW_P3_REG,
    RX_PW_P4_REG,
    RX_PW_P5_REG,
    FIFO_STATUS_REG,
    
    
    ACK_PLD_REG, // n/a addr
    TX_PLD_REG,  // n/a addr
    RX_PLD_REG,  // n/a addr
    
    DYNPD_REG = 0x1c, //1c
    FEATURE_REG = 0x1d
};

#endif // __NRF24L01_H