/*
 * Hyena.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef HYENA_H_
#define HYENA_H_
#include "Mammal.h"
class Hyena : public Mammal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for lizard
	 */
	Hyena();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the chicken talks
	 */
	std::string talk() const;

};





#endif /* HYENA_H_ */
