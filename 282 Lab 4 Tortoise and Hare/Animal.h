/*
 * Animal.h
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
protected:
	int position;
	int getRandomPercent();
	void move(int & currentPosition, int moveThisMuch);
public:
	Animal();
	int getPosition();
	void finalPosition();
	void resetPosition();

};



#endif /* ANIMAL_H_ */
