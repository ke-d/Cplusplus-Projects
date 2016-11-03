/*
 * Lizard.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Lizard.h"

/**
 * Constructor for lion
 */
Lizard::Lizard() {
	*animalType = "lizard";
}

/**
 * Return how a lizard moves
 */
std::string Lizard::move() const {
	return "walk";
}
