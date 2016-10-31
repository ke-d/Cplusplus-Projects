/*
 * Lion.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Lion.h"

Lion::Lion() {
	*animalType = "lion";
}

std::string Lion::talk() const {
	return "roar";
}
