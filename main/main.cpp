#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

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

  vTaskDelay(pdMS_TO_TICKS(1000)); // Wait 1 second before printing again
}

