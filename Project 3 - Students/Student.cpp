/*
 * Student.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: kdo70
 */

#include <iomanip>
#include <iostream>

#include "myDate.h"

using namespace std;
struct Student {
	int idNum;
	char * name;
	myDate birthdate;
	int grade;
};

/**
 * Print the student
 */
void printStudent(Student & student) {
	cout << setw(20) << left << student.idNum <<
	        setw(20) << student.name <<
			setw(20) << student.birthdate.toString() <<
			setw(20) << student.grade << '\n';
}

/**
 * Print an array of students
 */
void printArrayOfStudents(Student student[], const int & size) {
	cout << setw(20) << left << "Student ID" <<
	        setw(20) << "Name" <<
			setw(20) <<  "Birthday" <<
			setw(20) << "Grade" << '\n';
	for(int i = 0; i < size;i++) {
		printStudent(student[i]);
	}
}

int main() {
	Student student[3];
	student[0] = {1002, "Tom Thumb", myDate(1,1,1991), 56};
	student[1] = {2987, "Fred Flintstone", myDate(2,3,1993), 78};
	student[2] = {4765, "Sponge Bob", myDate(5,3,1992), 100};
	printArrayOfStudents(student, 3);

	return 0;
}



