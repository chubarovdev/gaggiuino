/* 09:32 15/03/2023 - change triggering comment */
#ifndef PINDEF_H
#define PINDEF_H

// STM32F4 pins definitions
#define thermoDO      PB4
#define thermoDI      PA7 // not used
#define thermoCS      PA6
#define thermoCLK     PA5

//NTC_pins
#define ntcGroupPin   PB0 //B0
#define ntcPreHeatPin   PB1 //B1

#define relayPreHeatPin     PB5 //B5
#define zcPin         PA0 //dimmer
#define brewPin       PC14 //OCS/C14
#define relayPin      PA15 //a15/PWM
#define dimmerPin     PA1 //adc/a1
#define steamPin      PC15 //OCS/C15
#define valvePin      PC13 //OCS/C13
#if defined(SINGLE_BOARD)
#define waterPin      PB15
#else
#define waterPin      PA12
#endif

#ifdef PCBV2
// PCB V2
#define steamValveRelayPin PB12
#define steamBoilerRelayPin PB13
#endif

//#define HX711_sck_1   PB0
#define HX711_dout_1  PB8
#define HX711_dout_2  PB9

#define USART_LCD     Serial2 // PA2(TX) & PA3(RX)
#define USART_ESP     Serial1 // PA9(TX) & PA10(RX)
#define USART_DEBUG   Serial  // USB-CDC (Takes PA8,PA9,PA10,PA11)

#endif
