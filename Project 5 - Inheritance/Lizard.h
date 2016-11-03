/*
 * Lizard.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef LIZARD_H_
#define LIZARD_H_
#include "Reptile.h"

class Lizard : public Reptile {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for lizard
	 */
	Lizard();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the lizard moves
	 */
	std::string move() const;
};



#endif /* LIZARD_H_ */
