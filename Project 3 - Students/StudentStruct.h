/*
 * StudentStruct.h
 *
 *  Created on: Oct 3, 2016
 *      Author: Kenny Do
 */

#ifndef STUDENTSTRUCT_H_
#define STUDENTSTRUCT_H_

#include "myDate.h"

struct Student {
	int idNum;
	char * name;
	myDate birthdate;
	int grade;
//	Student(int idNum, char * name, myDate birthdate, int grade) {
//		this->idNum = idNum;
//		this->birthdate = birthdate;
//		this->grade = grade;
//		this->name = name;
//	}
};



#endif /* STUDENTSTRUCT_H_ */
