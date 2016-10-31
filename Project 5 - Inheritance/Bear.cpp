/*
 * Bear.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Bear.h"

Bear::Bear() {
	*animalType = "bear";
}

std::string Bear::talk() const {
	return "growl";
}
