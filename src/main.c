#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"

void app_main()
{
    while( true ) 
    {
        // Print a simple "Hello, World!" message
        printf("Hello, World!\n");

        // You can also use the ESP-IDF logging facilities
        ESP_LOGI("main", "Hello, World from ESP_LOGI!");

        // Delay for 1000 ms
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}