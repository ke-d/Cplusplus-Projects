/*
 * Bear.h
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */

#ifndef BEAR_H_
#define BEAR_H_
#include "Mammal.h"
class Bear : public Mammal {
public:
	Bear();
	std::string talk() const;
};




#endif /* BEAR_H_ */
