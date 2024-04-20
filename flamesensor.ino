const int flameSensorPin = 2; // Digital pin connected to flame sensor

void setup() {
  pinMode(flameSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int flameDetected = digitalRead(flameSensorPin);
  if (flameDetected == HIGH) {
    Serial.println("Flame detected!"); // Print message to serial monitor
    // Optionally, you can add code here to turn on an LED or trigger an alarm
  }
  delay(500); // Delay to prevent rapid serial printouts
}
