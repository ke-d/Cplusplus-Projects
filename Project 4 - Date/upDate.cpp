/*
 * upDate.cpp
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */

#include "upDate.h"

using namespace std;

/**
 * Default contructor
 */
upDate::upDate() {
	iptr = new int[3];
	defaultDate();
}

/**
 * Constructor that takes in the month, day, and year
 */
upDate::upDate(int M, int D, int Y) {
	iptr = new int[3];
	setDate(M, D, Y);
}

upDate::upDate(const upDate& date) {
	iptr = new int[3];
	iptr[0] = date.getMonth();
	iptr[1] = date.getDay();
	iptr[2] = date.getYear();
}

upDate::~upDate() {
	delete[] iptr;
//	iptr = nullptr;
}
/**
 * Sets the default date
 */
void upDate::defaultDate() {
	iptr[0] = 5;
	iptr[1] = 11;
	iptr[2] = 1959;
}

void upDate::setDate(int M, int D, int Y) {
	if(M > 12 || M < 1 || D < 1) {
		defaultDate();
	} else {
		iptr[0] = M;
		iptr[1] = D;
		iptr[2] = Y;
		switch(iptr[0]) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(D > 31) {
				defaultDate();
			}
			break;
		case 2:
			if((Y % 4 == 0 && D > 29) || (Y % 4 != 0 && D > 28)) {
				defaultDate();
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(D > 30) {
				defaultDate();
			}
			break;

		}
	}

}


/**
 * Calculates the days between D and this date
 */
int upDate::daysBetween(upDate D) {
	return D.julian() - julian();
}

/**
 * Returns the month
 */
int upDate::getMonth() const {
	return iptr[0];
}

std::string upDate::getMonthName() {
	switch(iptr[0]) {
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	}
	return "";
}

/**
 * Returns the day
 */
int upDate::getDay() const {
	return iptr[1];
}

/**
 * Returns the year
 */
int upDate::getYear() const {
	return iptr[2];
}

/**
 * Returns the days between this date and the start of the year
 */
int upDate::getYearOffset() const {
	upDate start(1, 1, iptr[2]);
	return julian() - start.julian();
}

/**
 * Returns the Julian number of this date
 */
double upDate::julian() const {
	return iptr[1] - 32075 + 1461 * (iptr[2] + 4800 + (iptr[0] - 14) / 12) / 4 +367 * (iptr[0] - 2 - (iptr[0] - 14) / 12 * 12) /12 - 3 * ((iptr[2] +4900 + (iptr[0] - 14) / 12) / 100) / 4;
}

/**
 * Returns a upDate object that is calculated from the julian number
 */
upDate upDate::returnGregorian(int julian) {
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

	return upDate(month2, day1, year2);
}

std::ostream& operator<<(std::ostream& os, const upDate& date) {
	os << date.iptr[0] <<"/" << date.iptr[1]<<"/"<<date.iptr[2];
	return os;
}


/**
 * Increment the date by N
 */
upDate upDate::operator +(int N) {
	int jul = julian() + N;
	upDate newCalendar = returnGregorian(jul);
	return upDate(newCalendar.getMonth(), newCalendar.getDay(), newCalendar.getYear());
}


upDate& upDate::operator ++() {
	int jul = this->julian() + 1;
	this = this->returnGregorian(jul);
	return *this;
}

upDate upDate::operator ++(int int1) {
	upDate temp = *this;
	++*this;
	return temp;
}

upDate& upDate::operator --() {
	int jul = this->julian() - 1;
	this = this->returnGregorian(jul);
	return *this;
}

upDate upDate::operator --(int int1) {
	upDate temp = *this;
	++*this;
	return temp;
}

upDate operator +(int N,const upDate& date) {
	int jul = date.julian() + N;
	upDate newCalendar = date.returnGregorian(jul);
	return upDate(newCalendar.getMonth(), newCalendar.getDay(), newCalendar.getYear());
}

/**
 * Decrement the date by N
 */
upDate upDate::operator -(int N) {
	int jul = julian() - N;
	upDate newCalendar = returnGregorian(jul);
	return upDate(newCalendar.getMonth(), newCalendar.getDay(), newCalendar.getYear());
}



int upDate::operator -(const upDate& date) {
	return this->julian() - date.julian();
}

/**
 * Returns true if the this date is greater than to the other date else false
 */
bool upDate::operator >(const upDate & date) {
	if(this->daysBetween(date) < 0) {
		return true;
	} else {
		return false;
	}
}

/**
 * Returns true if the this date is less than to the other date else false
 */
bool upDate::operator <(const upDate& date) {
	if(this->daysBetween(date) > 0) {
		return true;
	} else {
		return false;
	}
}

/**
 * Returns true if the this date is greater than or equal to the other date else false
 */
bool upDate::operator >=(const upDate& date) {
	if(this->daysBetween(date) <= 0) {
		return true;
	} else {
		return false;
	}
}

/**
 * Returns true if the this date is less than or equal to the other date else false
 */
bool upDate::operator <=(const upDate& date) {
	if(this->daysBetween(date) >= 0) {
		return true;
	} else {
		return false;
	}
}

/**
 * Returns true if this date is equal to the other date
 */
bool upDate::operator ==(const upDate& date) {
	if(this->daysBetween(date) == 0) {
		return true;
	} else {
		return false;
	}
}

/**
 * Returns true if this date is not equal to the other date
 */
bool upDate::operator !=(const upDate& date) {
	if(this->daysBetween(date) != 0) {
		return true;
	} else {
		return false;
	}
}

