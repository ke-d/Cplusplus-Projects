/*
 * StudentStruct.h
 *
 *  Created on: Oct 3, 2016
 *      Author: kdo70
 */

#ifndef STUDENTSTRUCT_H_
#define STUDENTSTRUCT_H_
#include "myDate.h"
struct Student {
	int idNum;
	char * name;
	myDate birthdate;
	int grade;
};



#endif /* STUDENTSTRUCT_H_ */
