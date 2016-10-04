/*
 * MergeSortStudents.cpp
 *
 *  Created on: Oct 3, 2016
 *      Author: Kenny Do
 */
#include "MergeSortStudents.h"

template<typename T>
inline void MergeSortStudents::mergeSort(T arr[], const int& size, Comparator comp) {
	mergeSort(arr, 0, size);
}

template<typename T>
inline void MergeSortStudents::mergeSort(T arr[], const int& left,
		const int& right, Comparator comp) {
	const int middle = (right-1) / 2;

	mergeSort(arr, left, middle, comp);
	mergeSort(arr, middle + 1, right, comp);

	merge(arr, left, middle, right, comp);
}

template<typename T>
inline void MergeSortStudents::merge(T arr[], const int& left,
		const int& middle, const int& right, Comparator comp) {
	int index1 = 0;
	int index2 = 0;
	int index3 = 1;

	const int sizeLeft = middle - left + 1;
	const int sizeRight = right - middle;

	T leftArray[sizeLeft], rightArray[sizeRight];


}



