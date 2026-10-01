# Sound emitter
----
### DESCRIPTION

This project turns an Arduino UNO into a simple sound source.

----
### HARDWARE

- Arduino UNO
- MAX9744 Amplifier board
- 12V Power Supply
- Transducer speaker or Cone speaker
- Screwdriver
- Jump leads

----
### WIRING

<img src = "accoustic_driver_bb.png" width = "800">

- Connect the module to the Arduino UNO and the speaker.

- Connect the digital pin to the positive terminal of the input (L).

- Power the Amplifier using the 12V Power Supply

---

### Generating a signal

The code makes use of the Tone command to generate a signal from the digital pin. Other methods for generating a signal are possible using combinations of digital write commands.

An mp3 shield to generate a sound signal. More about this can be found [here](https://github.com/kingston-hackSpace/MP3_shield_with_ultrasonic_sensors)
