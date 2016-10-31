/*
 * Lion.h
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */

#ifndef LION_H_
#define LION_H_
#include "Mammal.h"
class Lion : public Mammal {
public:
	Lion();
	std::string talk() const;
};





#endif /* LION_H_ */
