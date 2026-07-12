#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "HELLO_WORLD";

void app_main(void)
{
    while(1) {
        ESP_LOGI(TAG, "Hello, world!");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

