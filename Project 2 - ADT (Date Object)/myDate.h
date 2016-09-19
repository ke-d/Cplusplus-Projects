/*
 * myDate.h
 *
 *  Created on: Sep 18, 2016
 *      Author: Kenny Do
 */

#ifndef MYDATE_H_
#define MYDATE_H_

class myDate {
	int month;
	int day;
	int year;
public:
	myDate();
	myDate(int M, int D, int Y);
	void display();
	void incrDate(int N);
	void decrDate(int N);
	int daysBetween(myDate D);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	int getYearOffset() const;
	double getJulianDate() const;
	static myDate returnGregorian(int julian);
};



#endif /* MYDATE_H_ */
