/*
 * RaceTester.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: kdo70
 */
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#define sleep(n) Sleep(1000 * n)

using namespace std;

#include "Hare.h"
#include "Tortoise.h"


Hare harry;
Tortoise tommy;

void PrintLine() {
	for(int i = 1; i < 70; ++i) {
		if(i == harry.getPosition() && i == tommy.getPosition()) {
			cout << "ouch!";
		} else if(i == harry.getPosition()) {
			cout << "H";
		} else if(i == tommy.getPosition()) {
			cout << "T";
		} else {
			cout << " ";
		}
	}
	cout <<endl;
}

int main() {
	srand(time(NULL));
	while(harry.getPosition() < 70 && tommy.getPosition() < 70) {
		harry.moveHare();
		tommy.moveTortoise();
		PrintLine();
		sleep(0.25);
	}

	if(harry.getPosition() > 70 && tommy.getPosition() > 70) {
		cout << "Tie race"<<endl;
	} else if (tommy.getPosition() > 70) {
		cout << "Tortoise wins"<<endl;
	} else if (harry.getPosition() > 70) {
		cout << "Hare wins"<<endl;
	}
	return 0;
}


