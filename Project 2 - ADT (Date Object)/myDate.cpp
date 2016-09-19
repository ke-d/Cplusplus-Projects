/*
 * myDate.cpp
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */
#include "myDate.h"
#include <iostream>
#include <math.h>
using namespace std;

myDate::myDate() {
	month = 5;
	day = 11;
	year = 1959;
}

myDate::myDate(int M, int D, int Y) {
	if(M > 12 || M < 1 || D < 1 || D > 31) {
		month = 5;
		day = 11;
		year = 1959;
	} else {
		month = M;
		day = D;
		year = Y;
	}
}

void myDate::display() {
	switch(month) {
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	}
	cout << " " << day << ", " << year;
}

void myDate::incrDate(int N) {
	int julian = getJulianDate() + N;
	myDate newCalendar = returnGregorian(julian);
	month = newCalendar.getMonth();
	day = newCalendar.getDay();
	year = newCalendar.getYear();
}

void myDate::decrDate(int N) {
	int julian = getJulianDate() - N;
	myDate newCalendar = returnGregorian(julian);
	month = newCalendar.getMonth();
	day = newCalendar.getDay();
	year = newCalendar.getYear();
}

int myDate::daysBetween(myDate D) {
	return D.getJulianDate() - getJulianDate();
}

int myDate::getMonth() const {
	return month;
}

int myDate::getDay() const {
	return day;
}

int myDate::getYear() const {
	return year;
}

int myDate::getYearOffset() const {
	myDate start(1, 1, year);
	return getJulianDate() - start.getJulianDate();
}

double myDate::getJulianDate() const {
	return day - 32075 + 1461 * (year + 4800 + (month - 14) / 12) / 4 +367 * (month - 2 - (month - 14) / 12 * 12) /12 - 3 * ((year +4900 + (month - 14) / 12) / 100) / 4;
}

myDate myDate::returnGregorian(int julian) {
	const int temp11 = julian + 68569;
	const int temp21 = 4 * temp11 / 146097;
	const int temp12 = temp11 - (146097 * temp21 + 3) / 4;
	const int year1 = 4000 * (temp12 + 1) / 1461001;
	const int temp13 = temp12 - (1461 * year1 / 4) + 31;
	const int month1 = 80 * temp13 / 2447;
	const int day1 = temp13 - (2447 * month1 / 80);
	const int temp14 = month1 / 11;
	const int month2 = month1 + 2 - 12 * temp14;
	const int year2 = 100 * (temp21 - 49) + year1 + temp14;

//	cout << month2 << " " << day1 << " " << year2<<endl;
	return myDate(month2, day1, year2);
}
