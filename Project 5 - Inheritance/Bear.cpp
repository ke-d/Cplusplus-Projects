/*
 * Bear.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Bear.h"

/**
 * Bear Constructor
 */
Bear::Bear() {
	*animalType = "bear";
}

/**
 * Return how the bear talks
 */
std::string Bear::talk() const {
	return "growl";
}
