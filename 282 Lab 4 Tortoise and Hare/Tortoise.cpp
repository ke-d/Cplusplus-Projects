/*
 * Tortoise.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: Kenny Do
 */

#include "Tortoise.h"

/**
 * Tortoise constructor inherits from animal
 */
Tortoise::Tortoise() {

}

/**
 * Moves the Tortoise randomly
 */
void Tortoise::moveTortoise() {
	int random = getRandomPercent();
	if(random >= 1 && random <= 5) {
		move(position, 3);
	} else if(random >= 6 && random <= 7) {
		move(position, -6);
	} else {
		move(position, 1);
	}
}


