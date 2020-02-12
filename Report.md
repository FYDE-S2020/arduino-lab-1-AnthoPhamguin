Name: Tuan (Anthony) Pham

EID: tp23843

Team Number: 11

## Questions

1. Why does your program need a setup and a loop?
	
    The program needs a setup to initialize variables and define input and output pins. A loop is needed to continuously run the program.

2. What is the downside to putting all your code in a loop?

    Variables will reinitialize on top of themselves. Methods may be called infinitely; method declarations may not be inside a loop.

3. Why does your code need to be compiled?

    Code written in higher level languages that are human-readable need to be translated to machine language for the computer to understand.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    The LED flickers too much. Use a dimmer switch or increase frequency to point high enough that you don't "see" the flickering.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    All devices need to be gounded in order to work.

6. What is the difference between synchronous and asynchronous communication?

    Synchronous - higher transfer rate, needs clock signal between sender and receiver, requires master/slave configuration.
    Asynchronous - lower transfer rate, doesn't need clock signal. 

7. Profile of UART: Sent X bytes in Y time 

    Sent 14 bytes in 94.955 ms

8. Profile of SPI: Sent X bytes in Y time

    Sent 14 bytes in 0.409 ms

9. Why is SPI so much faster than UART?

    SPI is synchronous, so data is sent in blocks and is therefore faster. UART is asynchronous, so data is sent one byte at a time and is therefore slower.

10. list one pro and one con of UART

    Pro: No clock needed. Con: Size of data frame is limited to only 9 bits.

11. list one pro and one con of SPI

    Pro: Separate MISO and MOSI lines; data can be transmitted and received at the same time. Con: Occupies more pin ports.

12. list one pro and one con of I2C

    Pro: Supports multi-master and multi-slave communication. Con: Open-drain design leads to limited speeds.

13. Why does I2C need external resistors to work?

    Sets a default state for the GPIO pins.

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/A_sequence.png)

Procedure A, step 4:
![Put path to your image here ->](img/A_dimmer.png)

Procedure B, UART:
![Put path to your image here ->](img/B_UART.png)

Procedure B, SPI:
![Put path to your image here ->](img/B_SPI.png)
