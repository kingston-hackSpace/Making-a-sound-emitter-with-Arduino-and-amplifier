# Sound emitter
----
### DESCRIPTION

This project turns an Arduino UNO into a simple sound source, using the MAX9744 amplifier.

*NOTE: ACOUSTIC TESTING*

 *- This project was created as an specific acoustic test for architecture. The code plays a 1000 Hz square wave, which is a standard reference frequency in acoustics.*

 *- You can change the tone and composition for other creative porpuses*

----
### HARDWARE

- Arduino UNO
- MAX9744 Amplifier board
- 5V Power Supply
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

The code makes use of the ***Tone*** command to generate a *square wave* signal from the digital pin. 

**tone(tonePin, 1000, 500)** generates a *1000* Hz square wave, which is a high, electronic-sounding pitch, for half a second. *500* is the duration in milliseconds, so the tone lasts half a second and then stops by itself. *delay(1000)* creates a 1 second pause before restarting a new loop and calling tone() again. 

NOTE: Each half-second tone is followed by half a second of silence, and in that gap you can hear the sound die away in the room. That decay is reverberation. Measuring how long it takes is one of the basic tests of a space, usually expressed as RT60, the time it takes for sound to drop by 60 dB. 


---
### MORE TUTORIALS

- An mp3 shield to generate a sound signal. More about this can be found [here](https://github.com/kingston-hackSpace/MP3_shield_with_ultrasonic_sensors)
