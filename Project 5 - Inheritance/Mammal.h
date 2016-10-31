/*
 * Mammal.h
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#ifndef MAMMAL_H_
#define MAMMAL_H_
#include "Animal.h"
class Mammal : public Animal {
public:
	std::string move() const;
};



#endif /* MAMMAL_H_ */
