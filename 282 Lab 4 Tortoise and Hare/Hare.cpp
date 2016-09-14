/*
 * Hare.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */
#include "Hare.h"

/**
 * Hare constructor inherits from animal
 */
Hare::Hare() {

}

/**
 * Moves the Hare randomly
 */
void Hare::moveHare() {
	int random = getRandomPercent();
	if(random >= 1 && random <= 2) {
		move(position, 0);
	} else if(random >= 3 && random <= 4) {
		move(position, 9);
	} else if(random == 5){
		move(position, -12);
	} else if((random >= 6 && random <= 8)) {
		move(position, 1);
	} else {
		move(position, -2);
	}
}



