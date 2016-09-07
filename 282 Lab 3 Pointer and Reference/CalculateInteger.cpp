/*
 * CalculateInteger.cpp
 *
 *  Created on: Sep 7, 2016
 *      Author: Kenny Do
 */
#include <iostream>
using namespace std;

/**
 * Pass in c and d by reference
 */
void integerCalc(int a, int b, int & c, int & d) {
	cout << "Call by reference"<<endl;
	c = a/b;
	d = a%b;
}

/**
 * Pass in c and d by pointer
 */
void integerCalc(int a, int b, int * c, int * d) {
	cout << "Call by pointer"<<endl;
	*c = a/b;
	*d = a%b;
}

int main() {
	int a;
	int b;
	int c;
	int d;

	cout <<"Enter num1:" <<endl;
	cin >> a;
	cout <<"Enter num2:" <<endl;
	cin >> b;

	integerCalc(a, b, c, d);
	cout << "C: " << c << " D:" << d<<endl;

	integerCalc(a, b, &c, &d);
	cout << "C: " << c << " D:" << d<<endl;
	return 0;
}



