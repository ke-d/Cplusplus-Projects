/*
 * Operator.cpp
 *
 *  Created on: Oct 3, 2016
 *      Author: Kenny Do
 */

#include <iostream>
#include "myDate.h"
using namespace std;

int main() {
	myDate d1, d2(2,2,2016);
	cout << (d1 < d2) << endl;
	cout << (d1 >= d2) << endl;
	return 0;
}



