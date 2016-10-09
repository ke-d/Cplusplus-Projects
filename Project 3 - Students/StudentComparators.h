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
		/**
		 * Compare by student ID
		 */
		int compare(Student stu1, Student stu2) {
			return stu1.idNum - stu2.idNum;
		}
	};

	class CompareStudentAge: public ComparatorInterface<Student> {
		/**
		 * Compare by student age
		 */
		int compare(Student stu1, Student stu2) {
			return stu1.birthdate.daysBetween(myDate(1,1,2016)) - stu2.birthdate.daysBetween(myDate(1,1,2016));
		}
	};

	class CompareStudentName: public ComparatorInterface<Student> {
		/**
		 * Compare by student name
		 */
		int compare(Student stu1, Student stu2) {
			return strcmp(stu1.name, stu2.name);
		}
	};

	class CompareStudentGrade: public ComparatorInterface<Student> {
		/**
		 * Compare by student grade
		 */
		int compare(Student stu1, Student stu2) {
			return stu1.grade - stu2.grade;
		}
	};
	public:
		static CompareStudentID* compareByStudentID() {
			return new CompareStudentID;
		}
		/**
		 * Precondition:
		 * 		none
		 * Postcondition:
		 * 		Returns a ComparatorInterface sorting by ID
		 */

		static CompareStudentAge* compareByStudentAge() {
			return new CompareStudentAge;
		}
		/**
		 * Precondition:
		 * 		none
		 * Postcondition:
		 * 		Returns a ComparatorInterface sorting by Age
		 */

		static CompareStudentName* compareByStudentName() {
			return new CompareStudentName;
		}
		/**
		 * Precondition:
		 * 		none
		 * Postcondition:
		 * 		Returns a ComparatorInterface sorting by Name
		 */

		static CompareStudentGrade* compareByStudentGrade() {
			return new CompareStudentGrade;
		}
		/**
		 * Precondition:
		 * 		none
		 * Postcondition:
		 * 		Returns a ComparatorInterface sorting by Grade
		 */

};



#endif /* STUDENTCOMPARATORS_H_ */
