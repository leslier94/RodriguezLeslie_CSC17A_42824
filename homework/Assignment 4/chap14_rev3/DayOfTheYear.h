/* 
 * File:   DateOfTheYear.h
 * Author: Ariana & Gilbert
 *
 * Created on May 2, 2016, 11:23 PM
 */

#ifndef DATEOFTHEYEAR_H
#define	DATEOFTHEYEAR_H

using namespace std;

class DayOfTheYear
{
private:
	int date;
	string month;

public:
	DayOfTheYear(int day, string mon)
	{
		date = day;
		month = mon;

	}
	void setMon(string mon)
	{
		month = mon;
	}
	string getMon() const
	{
		return month;
	}
	void setDay(int day)
	{
		date=day;
	}
	int getDay() const {
		return date;
	}
	void print(int day, string mon)
	{
		int nDay = 0;
		int pDay = 0;

		nDay = ++day;
		pDay = --day;

		cout << "The following day is  " << mon << " " << nDay << endl;
		cout << "The previous day was  " << mon << " " << pDay << endl;
	}
};


#endif	/* DATEOFTHEYEAR_H */

