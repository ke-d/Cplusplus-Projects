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
	upDate testDate(2,2,2014);
	upDate testDate2(testDate);
	upDate d1 = 1 + testDate;
	upDate d2 = testDate2 + 4;
	d1++;
	int diff = d2 - d1;
	cout << d1<<endl;
	cout << d2<<endl;
	cout << diff <<endl;
	return 0;
}



