/*
 * Animal.h
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
#include <iostream>
class Animal {
public:
	virtual std::string talk() const = 0;
	virtual std::string move() const = 0;
	friend std::ostream& operator<<(std::ostream& os, const Animal& ani);
protected:
	std::string * animalType;
	Animal();
	virtual ~Animal();
};



#endif /* ANIMAL_H_ */
