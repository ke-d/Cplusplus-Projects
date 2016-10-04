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
	class Comparator {
	public:
		template<typename T>
		virtual int compare(T obj1, T obj2);
	};

	class CompareStudentID: Comparator {
		int compare(Student stu1, Student stu2) {
			return stu1 - stu2;
		}
	};

public:
	template<typename T>
	static void mergeSort(T arr[], const int & size, Comparator comp);
private:
	template<typename T>
	static void mergeSort(T arr[], const int & left, const int & right, Comparator comp);
	template<typename T>
	static void merge(T arr[],const int & left, const int & middle, const int & right, Comparator comp);
};



#endif /* MERGESORTSTUDENTS_H_ */
