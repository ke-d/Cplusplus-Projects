/*
 * Eagle.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef EAGLE_H_
#define EAGLE_H_
#include "Bird.h"
class Eagle : public Bird {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for chicken
	 */
	Eagle();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the eagle talks
	 */
	std::string talk() const;
};



#endif /* EAGLE_H_ */
