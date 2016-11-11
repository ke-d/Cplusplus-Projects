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

/**
 * Generate numbers for a vector
 */
void generateNumbers(vector<int> & nums, int total) {
	for(int i = 0; i < total; ++i) {
		nums.push_back(rand() % 100 + 1);
	}
}

/**
 * Display the entire vector in columns
 */
void displayVector(vector<int> & nums) {
	int count = 0;
	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		if(count % 50 == 0) {
			cout << endl;
		}
		cout << left << setw(4) << (*it);
		++count;
	}
}

/**
 * Calculate the total
 */
int calculateTotal(vector<int> & nums) {
	int total = 0;
	for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
		total += *it;
	}
	return total;
}

/**
 * Calculate the average of an vector
 */
double calculateAverage(vector<int> & nums) {
	return (double) calculateTotal(nums) / nums.size();
}

/**
 * Gets the amount of times a number appears in the vector and stores it into a map
 */
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

/**
 * Prints out the map
 */
void printTimes(map<int, int> & times) {
	int count = 0;
	cout << left;
	for(map<int, int>::iterator it = times.begin(); it != times.end(); ++it) {
		++count;
		if(count < 10) {
			cout << it->first << ":" << setw(11) << it->second;
		} else {
		cout << it->first << ":" << setw(10) << it->second;
		}
		if(count % 10 == 0) {
			cout <<endl;
		}
	}
}

int main() {
	srand(time(NULL));
	vector<int> nums;
	generateNumbers(nums, 10000);
	sort(nums.begin(), nums.end());

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



