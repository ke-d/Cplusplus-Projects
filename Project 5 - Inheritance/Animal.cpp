/*
 * Animal.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */
#include "Animal.h"

/**
 * Set animalNum to 0
 */
int Animal::animalNum = 0;

/**
 * Constructor that allocates the string animal type and increments the animalNum
 */
Animal::Animal() {
	animalType = new std::string[64];
	++animalNum;
}

/**
 * Deletes the pointer to animal type and decrements the animalNum
 */
Animal::~Animal() {
	--animalNum;
	delete animalType;
}

/**
 * Returns the animalNum
 */
int Animal::getAnimalNum() {
	return animalNum;
}

/**
 * Displays the animalType, how the animal speaks, and how it moves
 */
std::ostream& operator<<(std::ostream& os, const Animal& ani) {
	os << *ani.animalType << ", " << ani.talk() << ", " << ani.move();
	return os;
}

