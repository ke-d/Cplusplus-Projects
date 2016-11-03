/*
 * Mammal.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Kenny Do
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_
#include "Animal.h"
class Mammal : public Animal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the mammal moves
	 */
	std::string move() const;
};



#endif /* MAMMAL_H_ */
