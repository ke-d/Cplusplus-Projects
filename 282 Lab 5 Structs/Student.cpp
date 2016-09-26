/*
 * Student.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: kdo70
 */
#include "myDate.h"
#include <iostream>
#include <iomanip>
using namespace std;
struct Student {
	int idNum;
	char * name;
	myDate birthdate;
	int grade;
};

void setStudent(Student & student,int newID, char newName[], myDate newBirthdate, int newGrade) {
	student.idNum = newID;
	student.name = newName;
	student.birthdate = newBirthdate;
	student.grade = newGrade;
}

//void printArrayOfStudents(Student student[]) {
//	for(int i < 0; i < sizeof(student);i++) {
//
//	}
//}

void printStudent(Student & student) {
	cout << setw(10) << left << student.idNum <<
	        setw(20) << student.name;
	        setw(20) << student.birthdate.toString() <<
	        setw(10) << student.grade << '\n';
}

int main() {
	Student student[3];
	setStudent(student[0], 123456789, "dsadsadas", myDate(2,3,1990), 80);
	printStudent(student[0]);
	return 0;
}



