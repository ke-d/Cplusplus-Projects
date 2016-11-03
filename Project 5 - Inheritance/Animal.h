/*
 * Animal.h
 *
 *  Created on: Oct 26, 2016
 *      Author: Kenny Do
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
#include <iostream>
class Animal {
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the animal talks
	 */
	virtual std::string talk() const = 0;

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the animal speaks
	 */
	virtual std::string move() const = 0;

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns how the animalNum
	 */
	static int getAnimalNum();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Overloads the << operator
	 */
	friend std::ostream& operator<<(std::ostream& os, const Animal& ani);

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Destructor for Animal base class
	 */
	virtual ~Animal();
protected:
	/**
	 * Holds the amount of animal objects instantiated
	 */
	static int animalNum;

	/**
	 * Holds the animalType
	 */
	std::string * animalType;

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Constructor for the Animal class
	 */
	Animal();
};



#endif /* ANIMAL_H_ */
