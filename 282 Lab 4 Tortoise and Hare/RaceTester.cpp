/*
 * RaceTester.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: Kenny Do
 */
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include "Hare.h"
#include "Tortoise.h"
#define sleep(n) Sleep(1000 * n)

using namespace std;

Hare harry;
Tortoise tommy;

/**
 * Prints the state of the race with | at the finish line
 */
void PrintLine() {
	for(int i = 1; i <= 71; ++i) {
		if(i == harry.getPosition() && i == tommy.getPosition()) {
			cout << "ouch!!!";
		} else if(i == harry.getPosition()) {
			cout << "H";
		} else if(i == tommy.getPosition()) {
			cout << "T";
		} else {
			cout << " ";
		}

		if(i == 64 && harry.getPosition() == tommy.getPosition()) {
			cout << "|";
		} else if(i == 70 && harry.getPosition() != tommy.getPosition()) {
			cout << "|";
		}
	}
	cout <<endl;
}

int main() {
	srand(time(NULL));
	cout << "BANG !!!!!\nAND THEY'RE OFF!!!!!"<<endl;
	while(harry.getPosition() < 70 && tommy.getPosition() < 70) {
		harry.moveHare();
		tommy.moveTortoise();
		if(harry.getPosition() >= 70) {
			harry.finalPosition();
		}
		if(tommy.getPosition() >= 70) {
			tommy.finalPosition();
		}
		PrintLine();
		sleep(0.25);
	}

	if(harry.getPosition() >= 70 && tommy.getPosition() >= 70) {
		cout << "Tie race"<<endl;
	} else if (tommy.getPosition() >= 70) {
		cout << "TORTOISE WINS!!!"<<endl;
	} else if (harry.getPosition() >= 70) {
		cout << "Hare wins. Yuch."<<endl;
	}
	return 0;
}


