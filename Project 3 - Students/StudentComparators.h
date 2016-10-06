/*
 * StudentComparators.h
 *
 *  Created on: Oct 4, 2016
 *      Author: Kenny Do
 */

#ifndef STUDENTCOMPARATORS_H_
#define STUDENTCOMPARATORS_H_

#include <string.h>

#include "ComparatorInterface.h"
#include "myDate.h"
#include "StudentStruct.h"

class StudentComparators {
	class CompareStudentID: public ComparatorInterface<Student> {
		int compare(Student stu1, Student stu2) {
			return stu1.idNum - stu2.idNum;
		}
	};

	class CompareStudentAge: public ComparatorInterface<Student> {
		int compare(Student stu1, Student stu2) {
			return stu1.birthdate.daysBetween(myDate(1,1,2016)) - stu2.birthdate.daysBetween(myDate(1,1,2016));
		}
	};

	class CompareStudentName: public ComparatorInterface<Student> {
		int compare(Student stu1, Student stu2) {
			return strcmp(stu1.name, stu2.name);
		}
	};

	class CompareStudentGrade: public ComparatorInterface<Student> {
		int compare(Student stu1, Student stu2) {
			return stu1.grade - stu2.grade;
		}
	};
	public:
		static CompareStudentID* compareByStudentID() {
			return new CompareStudentID;
		}

		static CompareStudentAge* compareByStudentAge() {
			return new CompareStudentAge;
		}


		static CompareStudentName* compareByStudentName() {
			return new CompareStudentName;
		}

		static CompareStudentGrade* compareByStudentGrade() {
			return new CompareStudentGrade;
		}

};



#endif /* STUDENTCOMPARATORS_H_ */
