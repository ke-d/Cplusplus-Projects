/*
 * Hyena.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Hyena.h"

/**
 * Constructor for hyena
 */
Hyena::Hyena() {
	*animalType = "hyena";
}

/**
 * Returns how a hyena talks
 */
std::string Hyena::talk() const {
	return "laugh";
}
