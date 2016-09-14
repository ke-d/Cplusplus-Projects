/*
 * Animal.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */
#include "Animal.h"
#include <time.h>
#include <cstdlib>

/**
 * Constructor that sets the position to 1
 */
Animal::Animal() {
	position = 1;
}

/**
 * Returns the position
 */
int Animal::getPosition() {
	return position;
}

/**
 * Sets the position to 71 for function PrintLine
 */
void Animal::finalPosition() {
	position = 71;
}

/**
 * Reset the position back to 1
 */
void Animal::resetPosition() {
	position = 1;
}

/**
 * Returns a int between 1 and 10
 */
int Animal::getRandomPercent() {
	return (rand() % 10 + 1);
}

/**
 * Move the position by moveThisMuch
 */
void Animal::move(int & currentPosition, int moveThisMuch) {
	currentPosition += moveThisMuch;
	if (currentPosition < 1) {
		resetPosition();
	}
}


