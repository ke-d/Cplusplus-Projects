/*
 * Lion.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Lion.h"

/**
 * Constructor for lion
 */
Lion::Lion() {
	*animalType = "lion";
}

/**
 * Return how a lion talks
 */
std::string Lion::talk() const {
	return "roar";
}
