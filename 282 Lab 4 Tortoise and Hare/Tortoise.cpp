/*
 * Tortoise.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */

#include "Tortoise.h"
Tortoise::Tortoise() {

}

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


