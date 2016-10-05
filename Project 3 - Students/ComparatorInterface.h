/*
 * ComparatorInterface.h
 *
 *  Created on: Oct 4, 2016
 *      Author: Kenny Do
 */

#ifndef COMPARATORINTERFACE_H_
#define COMPARATORINTERFACE_H_

template<typename T> class ComparatorInterface {
public:
	virtual int compare(T obj1, T obj2) = 0;
};



#endif /* COMPARATORINTERFACE_H_ */
