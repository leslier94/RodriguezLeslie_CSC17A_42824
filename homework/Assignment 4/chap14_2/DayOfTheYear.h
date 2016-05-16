/* 
 * File:   DayOfTheYear.h
 * Author: rcc
 *
 * Created on May 2, 2016, 3:30 PM
 */

#ifndef DAYOFTHEYEAR_H
#define	DAYOFTHEYEAR_H

using namespace std;

class DayOfTheYear
{
private:
	int date;
public:
	DayOfTheYear(int day);
	void setDay(int);
	int getDay();
	static void print(int);
};

DayOfTheYear::DayOfTheYear(int day)
{
	date = day;
}

void DayOfTheYear::setDay(int day)
{
	date = day;
}
int DayOfTheYear::getDay()
{
	return date;
}
void DayOfTheYear::print(int day)
{
	static string month[12] = { "January","February","March","April","May",
		"June","July","August","September","October","November","December" };
	cout << "Day " << day << " ";
	if (day >= 1 && day <= 31)
	{
		cout << month[0] << " would be " << day << endl;
	}
	else if (day >= 32 && day <= 60)
	{
		cout << month[1] << " would be " << day - 31 << endl;
	}
	else if (day >= 61 && day <= 91)
	{
		cout << month[2] << " would be " << day - 60 << endl;
	}
	else if (day >= 92 && day <= 121)
	{
		cout << month[3] << " would be " << day - 91 << endl;
	}
	else if (day >= 122 && day <= 152)
	{
		cout << month[4] << " would be " << day - 121 << endl;
	}
	else if (day >= 153 && day <= 182)
	{
		cout << month[5] << " would be " << day - 152 << endl;
	}
	else if (day >= 183 && day <= 213)
	{
		cout << month[6] << " would be " << day - 182 << endl;
	}
	else if (day >= 214 && day <= 244)
	{
		cout << month[7] << " would be " << day-213 << endl;
	}
	else if (day >= 245 && day <= 274)
	{
		cout << month[8] << " would be " << day -244 << endl;
	}
	else if (day >= 275 && day <= 305)
	{
		cout << month[9] << " would be " << day -274 << endl;
	}
	else if (day >= 306 && day <= 335)
	{
		cout << month[10] << " would be " << day -305 << endl;
	}
	else if (day >= 336 && day <= 365)
	{
		cout << month[11] << " would be " << day -335 << endl;
	}
}

#endif	/* DAYOFTHEYEAR_H */

