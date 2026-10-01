# Sound emitter
----
### DESCRIPTION

This tutorial shows how to make an Arduino UNO produce sound through a speaker using the MAX9744 amplifier.

*NOTE: ACOUSTIC TESTING*

 *- This project was created as an specific acoustic test for architecture. The code plays a 1000 Hz square wave, which is a standard reference frequency in acoustics.*

 *- You can change the tone and composition for other creative porpuses*

----
### HARDWARE

- Arduino UNO
- MAX9744 Amplifier board
- 12V Power Supply
- Transducer speaker or Cone speaker
- Small screwdriver

----
### WIRING

<img src = "accoustic_driver_bb.png" width = "800">

Connect the Amplifier module to the Arduino UNO and the speaker as in the diagram above. 

    - Connect the **Arduino pin 9** to the Amplifier's **L** input terminal (positive).

    - Power the Amplifier using the 12V Power Supply

---
### CODE and INSTRUCTIONS

- Upload the following code into your Arduino Board (or download [here](https://github.com/kingston-hackSpace/Making-a-sound-emitter-with-Arduino-and-amplifier/blob/main/accoustic_driver.ino))

```
const int tonePin = 9; // Digital pin connected to MAX9744 audio input

void setup() {
  // No special setup needed for tone() on this pin
}

void loop() {
  // Play a 1000 Hz tone for 500 milliseconds
  tone(tonePin, 1000, 500);
  delay(1000);
}

```
---
### UNDERSTANDING THE CODE: Generating a signal

The code makes use of the ***Tone*** command to generate a signal from the digital pin. Other methods for generating a signal are possible using combinations of digital write commands.

An mp3 shield to generate a sound signal. More about this can be found [here](https://github.com/kingston-hackSpace/MP3_shield_with_ultrasonic_sensors)
