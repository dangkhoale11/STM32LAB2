/*
 * sofware_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;

extern int timer_flag[10];



void setTimer(int i, int duration);
void timer_run(int i);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
