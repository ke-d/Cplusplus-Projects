/*
 * Chicken.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Chicken.h"

Chicken::Chicken() {
	*animalType = "chicken";
}

std::string Chicken::talk() const {
	return "bawk";
}

