/*
 * Reptile.h
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#ifndef REPTILE_H_
#define REPTILE_H_
#include "Animal.h"
#include <iostream>
class Reptile : public Animal {
public:
	Reptile();
	std::string talk() const;
	std::string move() const;
    friend std::ostream& operator<<(std::ostream& os, const Reptile& rep);
protected:
	std::string * animalType;

};



#endif /* REPTILE_H_ */
