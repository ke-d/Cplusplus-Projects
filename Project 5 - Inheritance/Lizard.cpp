/*
 * Lizard.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Lizard.h"

Lizard::Lizard() {
	*animalType = "lizard";
}

std::string Lizard::move() const {
	return "walk";
}
