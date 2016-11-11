/*
 * STL.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: Kenny Do
 */

#include <time.h>
#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <utility>
#include <vector>

using namespace std;

void generateNumbers(vector<int> & nums) {
	for(int i = 0; i < 10000; ++i) {
		nums.push_back(rand() % 100 + 1);
	}
}

void displayVector(vector<int> & nums) {
	int count = 0;
	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		++count;
		if(count % 50 == 0) {
			cout << endl;
		}
		cout << left << setw(4) << (*it);
	}
}

int calculateTotal(vector<int> & nums) {
	int total = 0;
	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		total += *it;
	}
	return total;
}

double calculateAverage(vector<int> & nums) {
	return (double) calculateTotal(nums) / nums.size();
}

void calculateNumTimesInList(vector<int> & nums, map<int, int> & times) {
	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		map<int,int>::iterator index = times.find(*it);
		if(index != times.end()) {
			++index->second;
		} else {
			times.insert(pair<int, int>(*it, 1));
		}
	}
}

void printTimes(map<int, int> & times) {
	int count = 0;
	for(map<int, int>::iterator it = times.begin(); it != times.end(); ++it) {
		++count;
		cout << it->first << ":" << setw(10) << it->second;
		if(count % 10 == 0) {
			cout <<endl;
		}
	}
}
int main() {
	srand(time(NULL));
	vector<int> nums;
	generateNumbers(nums);
	sort(nums.begin(), nums.end());
//	cout << nums.size();

	displayVector(nums);
	cout<<endl;
	cout << "Sum: " << calculateTotal(nums) <<endl;
	cout<<endl;
	system("pause");

	cout << "Average: " << calculateAverage(nums) <<endl;
	map<int, int> times;
	calculateNumTimesInList(nums, times);
	cout<<endl;
	printTimes(times);
	return 0;
}



