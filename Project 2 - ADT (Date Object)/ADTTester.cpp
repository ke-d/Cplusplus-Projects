/*
 * ADTTester.cpp
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */
#include <iostream>
#include "myDate.h"
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	myDate test(1,1,2000);
	test.display();
	test.incrDate(40);
	test.display();
	cout<<endl;
	cout << setprecision(8) << showpoint << fixed;
//	cout << "\n" <<test.daysBetween(myDate(1,1,1999))<<endl;
	return 0;
}


