/*
 * AnimalTester.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: kdo70
 */

#include <iostream>

#include "Animal.h"
#include "Bear.h"
#include "Chicken.h"
#include "Eagle.h"
#include "Hyena.h"
#include "Lion.h"
#include "Lizard.h"
#include "Snake.h"

using namespace std;

void UnitTest() {
	Lizard r2;
	cout << r2<<endl;

	Snake r3;
	cout << r3<<endl;

	Eagle b1;
	cout << b1<<endl;

	Chicken b2;
	cout << b2<<endl;

	Bear m1;
	cout<< m1<<endl;

	Hyena m2;
	cout<< m2<<endl;

	Lion m3;
	cout<< m3<<endl;

}

int main() {
//	UnitTest();
	Animal * ani = new Hyena;
	cout << *ani;
	return 0;
}


