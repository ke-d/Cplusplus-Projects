/*
 * ComparatorInterface.h
 *
 *  Created on: Oct 4, 2016
 *      Author: Kenny Do
 */

#ifndef COMPARATORINTERFACE_H_
#define COMPARATORINTERFACE_H_
/**
 * Interface for comparing different types of data members for sorting algorithms
 */
template<typename T> class ComparatorInterface {
public:
	virtual int compare(T obj1, T obj2) = 0;
	/**
	 * Precondition:
	 * 		none
	 * Postcondition:
	 * 		return an int < 0 if obj1 < ob2, > 0 if obj1 > ob2, or 0 if obj1 = obj2
	 */
};



#endif /* COMPARATORINTERFACE_H_ */
