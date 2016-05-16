/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include "DayOfTheYear.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
	int day;
	cout << "Enter day of the year " << endl;
	cin >> day;
	DayOfTheYear d(day);
	d.setDay(day);
	d.print(day);
    return 0;
}