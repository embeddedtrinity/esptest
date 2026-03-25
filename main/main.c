#include <stdio.h>
#include "driver/gpio.h"

void app_main(void)
{

    gpio_config_t  iostruct={0};
    iostruct.intr_type = GPIO_INTR_DISABLE;
}
