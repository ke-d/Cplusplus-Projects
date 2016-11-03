/*
 * Reptile.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Kenny Do
 */

#ifndef REPTILE_H_
#define REPTILE_H_
#include "Animal.h"
#include <iostream>
class Reptile : public Animal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the reptile talks
	 */
	std::string talk() const;

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the reptile moves
	 */
	std::string move() const;
};



#endif /* REPTILE_H_ */
