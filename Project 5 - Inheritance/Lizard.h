/*
 * Lizard.h
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */

#ifndef LIZARD_H_
#define LIZARD_H_
#include "Reptile.h"

class Lizard : public Reptile {
public:
	Lizard();
	std::string move() const;
};



#endif /* LIZARD_H_ */
