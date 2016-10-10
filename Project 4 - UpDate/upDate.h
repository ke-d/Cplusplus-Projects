/*
 * upDate.h
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */

#ifndef UPDATE_H_
#define UPDATE_H_

class upDate {
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
	upDate();

	/**
	 * Constructor that takes in the month, day, and year
	 */
	upDate(int M, int D, int Y);

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
	int daysBetween(upDate D);

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

	void setDate(int M, int D, int Y);

	/**
	 * Returns the Julian number of this date
	 */
	double getJulianDate() const;

	/**
	 * Returns a upDate object that is calculated from the julian number
	 */
	static upDate returnGregorian(int julian);

	/**
	 * Returns a day between d1 and d2
	 */
	static upDate getRandomDayBetween(upDate d1, upDate d2);

	/**
	 * Returns the display as a cstring
	 */
	const char * toString();

	/**
	 * Overload the greater than
	 */
	bool operator >(const upDate & date);

	/**
	 * Overload the less than
	 */
	bool operator <(const upDate & date);

	/**
	 * Overload the greater than or equal to
	 */
	bool operator >=(const upDate & date);

	/**
	 * Overload the less than or equal to
	 */
	bool operator <=(const upDate & date);

	/**
	 * Overload the equals
	 */
	bool operator ==(const upDate & date);

	/**
	 * Overload the not equals
	 */
	bool operator !=(const upDate & date);
};



#endif /* upDate_H_ */
