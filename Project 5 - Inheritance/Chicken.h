/*
 * Chicken.h
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_
#include "Bird.h"
class Chicken : public Bird {
public:
	Chicken();
	std::string talk() const;
};




#endif /* CHICKEN_H_ */
