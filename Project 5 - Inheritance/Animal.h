/*
 * Animal.h
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
class Animal {
public:
	virtual std::string talk() const = 0;
	virtual std::string move() const = 0;
protected:
	std::string * animalType;
};



#endif /* ANIMAL_H_ */
