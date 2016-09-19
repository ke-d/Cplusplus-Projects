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
	myDate test(12,31,2000);
	test.display();
	cout<<endl;
	cout << setprecision(8) << showpoint << fixed;
	cout << "\n" <<test.getYearOffset()<<endl;
	return 0;
}


