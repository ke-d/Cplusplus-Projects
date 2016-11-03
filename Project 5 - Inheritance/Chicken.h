/*
 * Chicken.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_
#include "Bird.h"
class Chicken : public Bird {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for chicken
	 */
	Chicken();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the chicken talks
	 */
	std::string talk() const;
};




#endif /* CHICKEN_H_ */
