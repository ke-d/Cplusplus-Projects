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

int menu() {
	cout << "1) Display original list" <<endl;
	cout << "2) Display list sorted by Student ID" <<endl;
	cout << "3) Display list sorted by Student Age" <<endl;
	cout << "4) Display list sorted by Student Name" <<endl;
	cout << "5) Display list sorted by Student Grade" <<endl;
	cout << "6) Exit" <<endl;
	char choice;
	choice = cin.get();
	cin.ignore(256, '\n');
	choice -= 48;
	while((int) choice < 1 || (int) choice > 6 ) {
		//� = 139 in char
		if(choice = 139) {
			//Terminates cleanly
			return 6;
		}
		cout << "Please pick a valid choice." <<endl;
		choice = cin.get();
		choice -= 48;
		cin.ignore(256, '\n');
	}
	return choice;
}
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

	Student stuID[size];
	Student stuAge[size];
	Student stuName[size];
	Student stuGrade[size];
	copy(student, student + size, stuID);
	copy(student, student + size, stuAge);
	copy(student, student + size, stuName);
	copy(student, student + size, stuGrade);

	Student * stupt[4];
	stupt[0] = stuID;
	stupt[1] = stuAge;
	stupt[2] = stuName;
	stupt[3] = stuGrade;
	MergeSort::mergeSort(stupt[0], size,StudentComparators::compareByStudentID());
	MergeSort::mergeSort(stupt[1], size,StudentComparators::compareByStudentAge());
	MergeSort::mergeSort(stupt[2], size,StudentComparators::compareByStudentName());
	MergeSort::mergeSort(stupt[3], size,StudentComparators::compareByStudentGrade());

	int choice = menu();
	while(choice != 6) {
		switch(choice) {
		case 1:
			printArrayOfStudents(student, size);
			break;
		case 2:
			printArrayOfStudents(stupt[0], size);
			break;
		case 3:
			printArrayOfStudents(stupt[1], size);
			break;
		case 4:
			printArrayOfStudents(stupt[2], size);
			break;
		case 5:
			printArrayOfStudents(stupt[3], size);
			break;
		}
		cout << endl;
		choice = menu();

	}

	return 0;
}



