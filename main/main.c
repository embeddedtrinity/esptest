#include <stdio.h>
#include "driver/gpio.h"

void app_main(void)
{
    gpio_config_t  iostruct={0};
    iostruct.intr_type = GPIO_INTR_DISABLE;
    iostruct.mode = GPIO_MODE_OUTPUT;
    iostruct.pin_bit_mask = 1ull << 16;
    iostruct.pull_down_en = GPIO_PULLDOWN_DISABLE;
    iostruct.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_config(&iostruct);
}
