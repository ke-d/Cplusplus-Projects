/*
 * Lion.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef LION_H_
#define LION_H_
#include "Mammal.h"
class Lion : public Mammal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for lizard
	 */
	Lion();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the chicken talks
	 */
	std::string talk() const;
};





#endif /* LION_H_ */
