#include "led.h"
#include "main.h"

void led_on(void){
	  GPIOA->ODR   |=  (1 << 5);         // Turn LED ON
}


void led_off(void){

    GPIOA->ODR &= ~(1 << 5);    /* clear bit 5 */

}

void led_blink(void){
	for(int i=0; i<4;i++){

		led_on();
		HAL_Delay(400);
		led_off();
		HAL_Delay(400);


	}
}
