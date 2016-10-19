/*
 * QueueTester.cpp
 *
 *  Created on: Oct 19, 2016
 *      Author: kdo70
 */

#include <time.h>
#include <cstdlib>
#include <iostream>

#include "myDate.h"
#include "Queue.h"
#include "StudentStruct.h"

using namespace std;

int main() {
	Queue <Student, 5> q;
	srand(time(NULL));
	while(!q.full()) {
	int i = 0;
	q.enqueue({rand() % 8999 + 1000, "Test Name", myDate::getRandomDayBetween(myDate(1,1,1990), myDate(12,31,1994)), rand() % 50 + 50});
	++i;
	}
	while(!q.empty()) {
		cout << q.dequeue().idNum << endl;
	}
	return 0;
}


