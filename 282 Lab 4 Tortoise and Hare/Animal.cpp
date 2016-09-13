/*
 * Animal.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */
#include "Animal.h"
#include <time.h>
#include <cstdlib>
Animal::Animal() {
	position = 1;
}
int Animal::getPosition() {
	return position;
}

void Animal::resetPosition() {
	position = 1;
}

int Animal::getRandomPercent() {
	return (rand() % 10 + 1);
}

void Animal::move(int & currentPosition, int moveThisMuch) {
	currentPosition += moveThisMuch;
	if (currentPosition < 1) {
		resetPosition();
	}
}


