#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

int main() {
  adc_init();
  adc_gpio_init(26);
  adc_gpio_init (27);

  while(1) {
    adc_select_input(0);
    uint16_t A1 = adc_read();

    adc_select_input(1);
    uint16_t A2 = adc_read();

    float V1 = A1 * 3.3 / 4095;
    float V2 = A2 * 3.3 / 4095;
    float V3 = A1 - A2;

  printf ("%2f\n", V3);
  }
}