void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Uptime Counter Started...");
}

void loop() {
  // millis() reads the total milliseconds since the ESP32 booted up
  unsigned long runTime = millis() / 1000; 

  Serial.print("Firmware Status: RUNNING | System Uptime: ");
  Serial.print(runTime);
  Serial.println(" seconds");

  delay(1000); // Wait 1 second before printing again
}

