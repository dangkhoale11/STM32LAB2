/*
 * sofware_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;

extern int timer2_flag;

void timer_Run();
void set_Timer1(int duration);
void set_Timer2(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
