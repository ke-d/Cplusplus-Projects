/*
 * Bird.h
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#ifndef BIRD_H_
#define BIRD_H_
#include "Animal.h"
class Bird : public Animal{
public:
	std::string move() const;
};



#endif /* BIRD_H_ */
