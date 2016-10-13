/*
 * upDateTester.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: kdo70
 */
#include <iostream>
#include "upDate.h"
using namespace std;

int main() {
	upDate testDate(2,1,2014);
	upDate testDate2(testDate);
	++testDate;
	--testDate2;
	cout << testDate<<endl;
	cout << testDate2<<endl;
	cout << (testDate <= testDate2);
	return 0;
}



