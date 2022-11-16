#include <stdio.h>
#include "pico/stdlib.h"

int main() {
      int contador=0;
      
      gpio_init_mask(0x3FF);
      gpio_set_dir_masked(0x3FF,0x7F);

      while (true) {
            char a= gpio_get(1);
            char b= gpio_get(2);
            char c= gpio_get(3);
            if(a==1) {
                  contador++;
            }
            if (b==2) {
                  contador--;
            }
            if (c==3) {
                  contador=0;
            }

            if(contador==1) {
                  gpio_put_masked(0x7F,0x7e); 
            }

            if(contador==2) {
                  gpio_put_masked(0x7F,0x30);
            }

            if(contador==3) {
                  gpio_put_masked(0x7F,0x6D)
            }

            if(contador==4) {
                  gpio_put_masked(0x7F,0x33);
            }

            if(contador==5) {
                  gpio_put_masked(0x7F,0x5B);
            }

            if(contador==6) {
                  gpio_put_masked(0x7F,0x5F);
            }

            if(contador==7) {
                  gpio_put_masked(0x7F,0x70);
            }

            if(contador==8) {
                  gpio_put_masked(0x7F,0x7F);
            }

            if(contador==9) {
                  gpio_put_masked(0x7F,0x73);
            }
                  if(contador>9)
           { contador-- }

           if(contador<0)
           {
            contador++
           }
           sleep_ms(250);
      }       
}