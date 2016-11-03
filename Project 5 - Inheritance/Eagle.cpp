/*
 * Eagle.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Eagle.h"
/**
 * Constructor for eagle
 */
Eagle::Eagle() {
	*animalType = "eagle";
}

/**
 * Returns how an eagle talks
 */
std::string Eagle::talk() const {
	return "screech";
}
