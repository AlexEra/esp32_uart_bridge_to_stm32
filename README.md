# esp32_uart_bridge_to_stm32
This code helps to download code to STM32F103C8T6 via ESP32 Serial1.<br/>

## Pins used in our project: <br/>
GPIO19 <-> BOOT0 of STM32F103C8T6 (or GD32F103C8T6). <br/>
GPIO1 <-> TX CH340 (used for programming ESP32). <br/>
GPIO3 <-> RX CH340. <br/>
GPIO16 <-> PA10 - from Serial1, used for transmit the data to STM32 (GD32). <br/>
GPIO17 <-> PA9 - from Serial1, used for recieve the data from STM32 (GD32). <br/>
**Optional:** GPIO23 - pin for enabling supply of the STM32 (GD32) - *not necessary to realize in your project*. <br/>

## Using
Using of PA10 and PA9 of STM32 (GD32) is necessary, because in accordance to datasheet this microcontroller has system bootloader, connected with USART0 (pins PA10 and PA9). With ESP32 you can use any available pin (in accordance to the datasheet). This project used Serial1 pins. <br/>

The binary files can be donwloaded to STM32 (GD32) with help of the Flash Loader Demonstrator or STM32CubeProgrammer in UART boot mode (there is note below about baud rate, one should use another speed). These programs require choosing of COM-port, with that ESP32 is connected. <br/>

After every downloading resetting of the ESP32 is required.

## Tested cases
**Baud rate:**
1. 115200: downloading was failed
2. 9600: successfull downloading
3. 1200: successfull downloading

## Notes
This code contains commented lines, that were used instead of <br/>
```
digitalWrite(16, digitalRead(3));
digitalWrite(1, digitalRead(17));
```
to download binary files with help of ESP32 registers. These programs have the same results of downloading. <br/>
 

