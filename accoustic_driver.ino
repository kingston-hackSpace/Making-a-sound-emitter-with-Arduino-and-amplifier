const int tonePin = 9; // Digital pin connected to MAX9744 audio input

void setup() {
  // No special setup needed for tone() on this pin
}

void loop() {
  // Play a 1000 Hz tone for 500 milliseconds
  tone(tonePin, 1000, 500);
  delay(1000);
}