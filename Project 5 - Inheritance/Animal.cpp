/*
 * Animal.cpp
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */
#include "Animal.h"

int Animal::animalNum = 0;

Animal::Animal() {
	animalType = new std::string[64];
	++animalNum;
}

Animal::~Animal() {
	--animalNum;
	delete animalType;
}

int Animal::getAnimalNum() {
	return animalNum;
}

std::ostream& operator<<(std::ostream& os, const Animal& ani) {
	os << *ani.animalType << ", " << ani.talk() << ", " << ani.move();
	return os;
}

