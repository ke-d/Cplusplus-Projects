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
	static int getAnimalNum();
	friend std::ostream& operator<<(std::ostream& os, const Animal& ani);
	virtual ~Animal();
protected:
	static int animalNum;
	std::string * animalType;
	Animal();
};



#endif /* ANIMAL_H_ */
