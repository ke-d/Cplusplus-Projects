/*
 * Hyena.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Hyena.h"

Hyena::Hyena() {
	*animalType = "hyena";
}

std::string Hyena::talk() const {
	return "laugh";
}
