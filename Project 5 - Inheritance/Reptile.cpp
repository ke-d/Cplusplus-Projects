/*
 * Reptile.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */
#include "Reptile.h"

Reptile::Reptile() {
	*animalType = "Reptile";
}

std::string Reptile::talk() const {
	return "hiss";
}

std::string Reptile::move() const {
	return "slithering";
}


std::ostream& operator<<(std::ostream& os, const Reptile& rep) {
	os << *rep.animalType << ", " << rep.talk() << ", " << rep.move();
	return os;
}

