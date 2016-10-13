/*
 * upDate.h
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */

#ifndef UPDATE_H_
#define UPDATE_H_

#include <iostream>
#include <string>

class upDate {
	int * iptr;


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

	upDate(const upDate& date);

	~upDate();

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

	std::string getMonthName();

	/**
	 * Returns the days between this date and the start of the year
	 */
	int getYearOffset() const;

	void setDate(int M, int D, int Y);

	/**
	 * Returns the Julian number of this date
	 */
	double julian() const;

	/**
	 * Returns a upDate object that is calculated from the julian number
	 */
	static upDate returnGregorian(int julian);

	void updateFromGregorian(int julian);

    friend std::ostream& operator<<(std::ostream& os, const upDate& date);


	friend upDate operator +(int N,const upDate& date);


	upDate& operator ++();

	upDate operator ++(int);

	upDate& operator --();

	upDate operator --(int);

	/**
	 * Increment the date by N
	 */
	upDate operator +(int N);

	/**
	 * Decrement the date by N
	 */
	upDate operator -(int N);

	int operator -(const upDate& date);

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
