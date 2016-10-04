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
		virtual int compare(T obj1, T obj2) = 0;
	};

	class CompareStudentID: public Comparator<Student> {
	public:
		int compare(Student stu1, Student stu2) {
			return stu1.idNum - stu2.idNum;
		}
	};

public:
	template<typename T>
//	static void mergeSort(T arr[], const int & size, Comparator<T> * comp);
	static void mergeSort(T arr[], int l, int r, Comparator<T> * comp);
	static CompareStudentID* compareByStudentID() {
		return new CompareStudentID;
	}
private:
	template<typename T>
	static void merge(T arr[], int l, int m, int r, Comparator<T> * comp);
};

template<typename T>
inline void MergeSortStudents::mergeSort(T arr[], int l, int r,
		Comparator<T>* comp) {
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m, comp);
        mergeSort(arr, m+1, r, comp);

        merge(arr, l, m, r, comp);
    }
}

template<typename T>
inline void MergeSortStudents::merge(T arr[], int l, int m, int r,
		Comparator<T>* comp) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    T L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (comp->compare(L[i], R[j]) <= 0)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

#endif /* MERGESORTSTUDENTS_H_ */
