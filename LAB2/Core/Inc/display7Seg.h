/*
 * display7Seg.h
 *
 *  Created on: Sep 29, 2024
 *      Author: ADMIN
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#include "main.h"

extern GPIO_PinState LEDS_state[10][7];
extern GPIO_TypeDef *SEG_PORTS[12];
extern uint16_t SEG_PINS[12];

extern int index_led;
extern int led_buffer[4];
extern int MAX_LED;


void update7SEG(int index);


void set_LEDS(GPIO_PinState *L_LEDS_state);

void display7SEG(int number);

void turnOn(int i);


#endif /* INC_DISPLAY7SEG_H_ */
