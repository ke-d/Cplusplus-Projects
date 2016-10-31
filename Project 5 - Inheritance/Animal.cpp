/*
 * Animal.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Animal.h"

Animal::Animal() {
	animalType = new std::string[64];
}

Animal::~Animal() {
	delete animalType;
}

std::ostream& operator<<(std::ostream& os, const Animal& ani) {
	os << *ani.animalType << ", " << ani.talk() << ", " << ani.move();
	return os;
}

