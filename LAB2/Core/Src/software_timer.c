/*
 * software_timer.c
 *
 *  Created on: Sep 27, 2024
 *      Author: ADMIN
 */
#include "software_timer.h"


int timer_Counter1 = 0;
int timer1_flag = 0;
int timer_Counter2 = 0;
int timer2_flag = 0;

void set_Timer1(int duration){
	timer_Counter1 = duration;
	timer1_flag = 0;
}

void set_Timer2(int duration){
	timer_Counter2 = duration;
	timer2_flag = 0;
}
void timer_Run(){
	if(timer_Counter1 > 0){
		timer_Counter1--;
		if(timer_Counter1 <= 0) timer1_flag = 1;
	}
	if(timer_Counter2 > 0){
			timer_Counter2--;
			if(timer_Counter2 <= 0) timer2_flag = 1;
	}
}
