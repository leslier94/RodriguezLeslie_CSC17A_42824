/*
* File:   main.cpp
* Author: rcc
*
* Created on May 2, 2016, 11:47 AM
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "DayOfTheYear.h"

using namespace std;

/*
*
*/



int main(int argc, char** argv) {
	int day;
	int nDay;
	string mon;

	cout << "Enter day of the month " << endl;
	cin >> day;
	if (day < 1 || day>31)
	{
		cout << "Invalid entry" << endl;
	}
	cout << "Enter month of the year " << endl;
	cin >> mon;
	DayOfTheYear d(day, mon);
	d.setDay(day);
	d.setMon(mon);
	d.print(day, mon);
	

	return 0;
}
