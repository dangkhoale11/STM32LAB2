/*
 * software_timer.c
 *
 *  Created on: Sep 27, 2024
 *      Author: ADMIN
 */
#include "software_timer.h"


int timer1_Counter1 = 0;
int timer1_flag = 0;

void set_Timer1(int duration){
	timer1_Counter1 = duration;
	timer1_flag = 0;
}

void timer_Run1(){
	if(timer1_Counter1 > 0){
		timer1_Counter1--;
		if(timer1_Counter1 <= 0) timer1_flag = 1;
	}
}
