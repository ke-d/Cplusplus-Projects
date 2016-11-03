/*
 * Chicken.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Chicken.h"

/**
 * Constructor for chicken
 */
Chicken::Chicken() {
	*animalType = "chicken";
}

/**
 * Returns how a chicken talks
 */
std::string Chicken::talk() const {
	return "bawk";
}

