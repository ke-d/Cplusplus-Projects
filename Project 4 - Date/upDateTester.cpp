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
	upDate testDate(1,1,2015);
	upDate testDate2(testDate);
	upDate testDate3 = 5 + testDate2;
	++testDate;
	--testDate2;
	cout << testDate<<endl;
	cout << testDate2<<endl;
	cout << testDate3<<endl;
	cout << upDate::GetDateCount()<<endl;
	return 0;
}



