/*
* File:   main.cpp
* Author: rcc
*
* Created on May 2, 2016, 11:47 AM
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "LandTract.h"

	using namespace std;

	/*
	*
	*/

	int main(int argc, char** argv) {

		int width;
		int length;
		LandTract first, second;

			cout << "Enter length of first tract " << endl;
			cin >> length;
			cout << "Enter width of first tract " << endl;
			cin >> width;
		
		first.setLength(length);
		first.setWidth(width);


		cout << "Enter length of second tract " << endl;
		cin >> length;
		cout << "Enter width of second tract " << endl;
		cin >> width;

		second.setLength(length);
		second.setWidth(width);

		cout << "Area for first tract is " << first.getArea() << endl;
		cout << "Area for second tract is  " << second.getArea() << endl;
		if (first.getArea() == second.getArea())
		{
			cout << "Tracts are equal in area " << endl;
		}
		if (first.getArea() > second.getArea())
		{
			cout << "First tract is greater than second " << endl;
		}
		if (first.getArea() < second.getArea())
		{
			cout << "Second tract is greater than first " << endl;
		}
		return 0;
	}