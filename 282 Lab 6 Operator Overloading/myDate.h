/*
 * myDate.h
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */

#ifndef MYDATE_H_
#define MYDATE_H_

class myDate {
	/**
	 * Stores the date
	 */
	int month;

	/**
	 * Stores the day
	 */
	int day;

	/**
	 * Stores the year
	 */
	int year;

	/**
	 * Sets the default date
	 */
	void defaultDate();

public:
	/**
	 * Default contructor
	 */
	myDate();

	/**
	 * Constructor that takes in the month, day, and year
	 */
	myDate(int M, int D, int Y);

	/**
	 * Displays the date
	 */
	void display();

	/**
	 * Increment the date by N
	 */
	void incrDate(int N);

	/**
	 * Decrement the date by N
	 */
	void decrDate(int N);

	/**
	 * Calculates the days between D and this date
	 */
	int daysBetween(myDate D);

	/**
	 * Returns the month
	 */
	int getMonth() const;

	/**
	 * Returns the day
	 */
	int getDay() const;

	/**
	 * Returns the year
	 */
	int getYear() const;

	/**
	 * Returns the days between this date and the start of the year
	 */
	int getYearOffset() const;

	/**
	 * Returns the Julian number of this date
	 */
	double getJulianDate() const;

	/**
	 * Returns a myDate object that is calculated from the julian number
	 */
	static myDate returnGregorian(int julian);

	/**
	 * Returns the display as a cstring
	 */
	const char * toString();

	/**
	 * Overload the greater than
	 */
	bool operator >(const myDate & date);

	/**
	 * Overload the less than
	 */
	bool operator <(const myDate & date);

	/**
	 * Overload the greater than or equal to
	 */
	bool operator >=(const myDate & date);

	/**
	 * Overload the less than or equal to
	 */
	bool operator <=(const myDate & date);

	/**
	 * Overload the equals
	 */
	bool operator ==(const myDate & date);

	/**
	 * Overload the not equals
	 */
	bool operator !=(const myDate & date);
};



#endif /* MYDATE_H_ */
