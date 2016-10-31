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
/**
 * Returns the integer of the menu selection of the user
 */
int menu() {
	cout << "1) Add" <<endl;
	cout << "2) Remove" <<endl;
	cout << "3) Display all animals" <<endl;
	cout << "4) Display animal count" <<endl;
	cout << "5) Exit" <<endl;
	char choice;
	choice = cin.get();
	cin.ignore(256, '\n');
	choice -= 48;
	while((int) choice < 1 || (int) choice > 5 ) {
		//Ï = 139 in char
		if(choice = 139) {
			//Terminates cleanly
			return 5;
		}
		cout << "Please pick a valid choice." <<endl;
		choice = cin.get();
		choice -= 48;
		cin.ignore(256, '\n');
	}
	return choice;
}

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

	cout << Animal::getAnimalNum()<<endl;
}

int main() {
//	UnitTest();
	Animal * aniPtr[] = Animal[10];
	int menu = menu();
	while(menu != 5) {
		switch(menu) {
		case 1:
			addAnimal(Animal * zoo);
			break;
		case 2:
			removeAnimal(Animal * zoo);
			break;
		}
		case 3:
			display(Animal * zoo);
			break;
		case 4:
			cout << Animal::getAnimalNum();
	}
	return 0;
}


