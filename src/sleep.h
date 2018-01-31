/*
 * sleep.h
 *
 *  Created on: Jan 31, 2018
 *      Author: David
 */

#ifndef SLEEP_H_
#define SLEEP_H_

typedef enum {
	EM0,
	EM1,
	EM2,
	EM3
} sleepstate_enum;

void sleep(void);
void blockSleepMode(sleepstate_enum minimumMode);
void unblockSleepMode(sleepstate_enum minimumMode);

#endif /* SLEEP_H_ */
