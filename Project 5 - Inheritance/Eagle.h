/*
 * Eagle.h
 *
 *  Created on: Oct 31, 2016
 *      Author: kdo70
 */

#ifndef EAGLE_H_
#define EAGLE_H_
#include "Bird.h"
class Eagle : public Bird {
public:
	Eagle();
	std::string talk() const;
};



#endif /* EAGLE_H_ */
