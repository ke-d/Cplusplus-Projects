/*
 * Bear.h
 *
 *  Created on: Oct 31, 2016
 *      Author: Kenny Do
 */

#ifndef BEAR_H_
#define BEAR_H_
#include "Mammal.h"
class Bear : public Mammal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for Bear
	 */
	Bear();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the bear talks
	 */
	std::string talk() const;
};




#endif /* BEAR_H_ */
