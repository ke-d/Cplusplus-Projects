/*
 * Bird.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Kenny Do
 */

#ifndef BIRD_H_
#define BIRD_H_
#include "Animal.h"
class Bird : public Animal{
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the bird moves
	 */
	std::string move() const;
};



#endif /* BIRD_H_ */
