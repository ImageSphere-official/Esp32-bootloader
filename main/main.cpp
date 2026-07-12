#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_timer.h"

// Define a logging tag for your serial monitor output
static const char *TAG = "FIRMWARE_CHECK";

extern "C" void app_main(void)
{
    ESP_LOGI(TAG, "Uptime Counter Started...");

    while (1) {
        // esp_timer_get_time() returns microseconds since boot up
        // Divide by 1000000 to convert to seconds
        uint64_t runTime = esp_timer_get_time() / 1000000;

        // Print to the serial log
        ESP_LOGI(TAG, "Status: RUNNING | System Uptime: %llu seconds", runTime);

        // Native FreeRTOS delay (1000 milliseconds)
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

