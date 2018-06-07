#include "freertos/FreeRTOS.h"
#include <freertos/task.h>
#include "esp_wifi.h"
#include "esp_system.h"
#include "esp_event.h"
#include "esp_event_loop.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include <driver/spi_master.h>
#include <esp_log.h>

#include "test_SSD1306_i2c.c"

void app_main(void) {
	nvs_flash_init();
	xTaskCreatePinnedToCore(&task_test_SSD1306i2c, "task_test_SSD1306i2c", 8048, NULL, 5, NULL, 0);
}
