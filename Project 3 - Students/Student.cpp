/*
 * Student.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: kdo70
 */

#include <iomanip>
#include <iostream>

#include "myDate.h"
#include "MergeSort.h"
#include "StudentComparators.h"
#include "StudentStruct.h"

using namespace std;


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
	const int size = 5;
	Student student[size];
	student[0] = {5002, "Tom Thumb", myDate(1,1,1991), 56};
	student[1] = {3987, "Fred Flintstone", myDate(2,3,1993), 78};
	student[2] = {4765, "Aponge Bob", myDate(5,3,1992), 100};
	student[3] = {1234, "Clone", myDate(5,3,1950), 75};
	student[4] = {4321, "Clone2", myDate(2,1,1950), 60};
	Student * stupt[4];
	Student result[size];
	copy(student, student + size, result);
	stupt[0] = result;
//	stupt[1] = &student[1];
//	stupt[2] = &student[2];
//	stupt[3] = &student[3];
	MergeSort::mergeSort(stupt[0], size,StudentComparators::compareByStudentID());
	printArrayOfStudents(student, size);
	printArrayOfStudents(stupt[0], size);

	return 0;
}



