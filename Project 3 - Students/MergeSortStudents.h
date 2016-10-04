/*
 * MergeSortStudents.h
 *
 *  Created on: Oct 3, 2016
 *      Author: kdo70
 */

#ifndef MERGESORTSTUDENTS_H_
#define MERGESORTSTUDENTS_H_

#include "StudentStruct.h"

class MergeSortStudents {
	template<typename T> class Comparator {
	public:
		virtual int compare(T obj1, T obj2);
	};

	class CompareStudentID: public Comparator<Student> {
		int compare(Student stu1, Student stu2) {
			return stu1.idNum - stu2.idNum;
		}
	};

public:
	template<typename T>
//	static void mergeSort(T arr[], const int & size, Comparator<T> * comp);
	static void mergeSort(T arr[], const int & left, const int & right, Comparator<T> * comp);
	static CompareStudentID* studentIDCompare() {
		return new CompareStudentID;
	}
private:

	template<typename T>
	static void merge(T arr[],const int & left, const int & middle, const int & right, Comparator<T> * comp);
};



#endif /* MERGESORTSTUDENTS_H_ */
