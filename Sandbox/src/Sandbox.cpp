//============================================================================
// Name        : Sandbox.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
public:
	static void fun() {
		cout<<"test";
	}
};



int main() {
	Test::fun();
	return 0;
}
