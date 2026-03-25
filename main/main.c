#include <stdio.h>
#include "driver/uart.h"
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
    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity    = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };
    // Set UART pins(TX: IO4, RX: IO5, RTS: IO18, CTS: IO19)
    ESP_ERROR_CHECK(uart_set_pin(2, 4, 5, 18, 19));
}
