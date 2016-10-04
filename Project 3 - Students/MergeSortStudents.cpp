/*
 * MergeSortStudents.cpp
 *
 *  Created on: Oct 3, 2016
 *      Author: Kenny Do
 */
#include "MergeSortStudents.h"

//template<typename T>
//inline void MergeSortStudents::mergeSort(T arr[], const int& size, Comparator<T> * comp) {
//	mergeSort(arr, 0, size, comp);
//}

template<typename T>
inline void MergeSortStudents::mergeSort(T arr[], const int& left,
		const int& right, Comparator<T> * comp) {
	const int middle = (right-1) / 2;

	mergeSort(arr, left, middle, comp);
	mergeSort(arr, middle + 1, right, comp);

	merge(arr, left, middle, right, comp);
}

template<typename T>
inline void MergeSortStudents::merge(T arr[], const int& left,
		const int& middle, const int& right, Comparator<T> * comp) {
	int i, j, k;

	const int sizeLeft = middle - left + 1;
	const int sizeRight = right - middle;

	T leftArray[sizeLeft], rightArray[sizeRight];

	for(i = 0; i < sizeLeft; i++) {
		leftArray[i] = arr[left + i];
	}
	for(j = 0; j < right; j++) {
		rightArray[j] = arr[middle + 1 + j];
	}

	j = 0;
	j = 0;
	k = left;

	while(i < sizeLeft && j < sizeRight) {
		if(comp->compare(leftArray[i], rightArray[j]) <= 0) {
			arr[k] = leftArray[i];
			i++;
		} else {
			arr[k] = rightArray[j];
			j++;
		}
		k++;
	}

	while(i < sizeLeft) {
		arr[k] = leftArray[i];
		i++;
		k++;
	}

	while(i < sizeRight) {
		arr[k] = leftArray[j];
		j++;
		k++;
	}
}



