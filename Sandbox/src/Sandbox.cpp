//============================================================================
// Name        : Sandbox.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printInt(const int & num) {
	cout << "method: " << num <<endl;
}

int main() {
	int num = 5;
	int & ref = num;
	ref = 10;
	printInt(num);

	const char * test = "test";

	cout << test <<endl;
	return 0;
}
