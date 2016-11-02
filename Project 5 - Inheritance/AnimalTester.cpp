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

enum AnimalName{BEAR = 1, CHICKEN = 2, EAGLE = 3, HYENA = 4, LION = 5, LIZARD = 6, SNAKE = 7};
/**
 * Returns the integer of the menu selection of the user
 */
int menu() {
	cout << "1) Add" <<endl;
	cout << "2) Remove" <<endl;
	cout << "3) Display all animals" <<endl;
	cout << "4) Display animal count" <<endl;
	cout << "5) Exit" <<endl;
	int choice;
	cin >> choice;
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

void addAnimal(Animal * zoo[]) {
	int cageNum;
	int animalNum;
	cout << "Enter a cage number to add"<<endl;
	cin >> cageNum;
	--cageNum;
	if(zoo[cageNum] == 0) {
		cout << "What animal to you want"<<endl;
		cout << "1) Bear\n2) Chicken\n3) Eagle\n4) Hyena\n5) Lion\n6) Lizard\n7) Snake\n"<<endl;
		cin >> animalNum;
		switch(animalNum) {
		case BEAR:
			zoo[cageNum] = new Bear;
			cout << "Bear added"<<endl;
			break;
		case CHICKEN:
			zoo[cageNum] = new Chicken;
			cout << "Chicken added"<<endl;
			break;
		case EAGLE:
			zoo[cageNum] = new Eagle;
			cout << "Eagle added"<<endl;
			break;
		case HYENA:
			zoo[cageNum] = new Hyena;
			cout << "Hyena added"<<endl;
			break;
		case LION:
			zoo[cageNum] = new Lion;
			cout << "Lion added"<<endl;
			break;
		case LIZARD:
			zoo[cageNum] = new Lizard;
			cout << "Lizard added"<<endl;
			break;
		case SNAKE:
			zoo[cageNum] = new Snake;
			cout << "Snake added"<<endl;
			break;
		}
	} else {
		cout << "Cage occupied"<<endl;
	}

}

void removeAnimal(Animal * zoo[]) {
	int cageNum;
	cout << "Enter a cage number to remove"<<endl;
	cin >> cageNum;
	--cageNum;
	if(zoo[cageNum] != NULL) {
		zoo[cageNum]->~Animal();
		zoo[cageNum] = NULL;
		cout << "Animal removed"<<endl;
	} else {
		cout << "Cage already empty"<<endl;
	}

}


void display(Animal * zoo[]) {
	for(int i = 0; i < 10; ++i) {
		if (zoo[i] != NULL) {
			cout <<"Cage " << i + 1 << ": "<< *zoo[i]<<endl;
		} else {
			cout <<"Cage " << i + 1<< ": empty"<<endl;
		}
	}

}


int main() {
//	UnitTest();
	Animal * aniPtr[10] = {NULL};
	int inputMenu = menu();
	while(inputMenu != 5) {
		switch(inputMenu) {
		case 1:
			addAnimal(aniPtr);
			break;
		case 2:
			removeAnimal(aniPtr);
			break;
		case 3:
			display(aniPtr);
			break;
		case 4:
			cout << Animal::getAnimalNum()<<" animals" <<endl;
			break;
		}
		cout <<endl;
		inputMenu = menu();
	}
	return 0;
}


