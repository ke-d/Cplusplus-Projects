/*
 * Eagle.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Eagle.h"

Eagle::Eagle() {
	*animalType = "eagle";
}

std::string Eagle::talk() const {
	return "screech";
}
