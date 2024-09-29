/*
 * display7Seg.c
 *
 *  Created on: Sep 29, 2024
 *      Author: ADMIN
 */

#include "display7Seg.h"


GPIO_PinState LEDS_state[10][7] = { { 0, 0, 0, 0, 0, 0, 1 }, { 1, 0, 0, 1,
  			1, 1, 1 }, { 0, 0, 1, 0, 0, 1, 0 }, { 0, 0, 0, 0, 1, 1, 0 }, { 1, 0,
  			0, 1, 1, 0, 0 }, { 0, 1, 0, 0, 1, 0, 0 }, { 0, 1, 0, 0, 0, 0, 0 }, {
  			0, 0, 0, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 1, 0,
  			0 } };
 GPIO_TypeDef *SEG_PORTS[12] = { SEG0_GPIO_Port, SEG1_GPIO_Port, SEG2_GPIO_Port, SEG3_GPIO_Port,
		  SEG4_GPIO_Port,  SEG5_GPIO_Port, SEG6_GPIO_Port

  };
 uint16_t SEG_PINS[12] = {
		  SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin
  };
  void set_LEDS(GPIO_PinState *L_LEDS_state) {
  		for (int i = 0; i < 7; i++) {
  			HAL_GPIO_WritePin(SEG_PORTS[i], SEG_PINS[i], L_LEDS_state[i]);
  		}
  }
  void display7SEG(int number) {
  		switch (number) {
  		case 0:
  			set_LEDS(LEDS_state[0]);
  			break;
  		case 1:
  			set_LEDS(LEDS_state[1]);
  			break;
  		case 2:
  			set_LEDS(LEDS_state[2]);
  			break;
  		case 3:
  			set_LEDS(LEDS_state[3]);
  			break;
  		case 4:
  			set_LEDS(LEDS_state[4]);
  			break;
  		case 5:
  			set_LEDS(LEDS_state[5]);
  			break;
  		case 6:
  			set_LEDS(LEDS_state[6]);
  			break;
  		case 7:
  			set_LEDS(LEDS_state[7]);
  			break;
  		case 8:
  			set_LEDS(LEDS_state[8]);
  			break;
  		case 9:
  			set_LEDS(LEDS_state[9]);
  			break;
  		default:
  			break;
  		}
  	}



  void turnOn(int i){
	  switch (i){
	  case 0:
		  HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin, 0);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin, 1);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin, 1);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin, 1);
		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
		  break;
	  default:
		  break;
	  }
 }
