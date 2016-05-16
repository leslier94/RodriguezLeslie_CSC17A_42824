/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include "Circle.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

double circleRad;
	double area;
	double diameter;
	double circumference;

	cout << "Enter radius" << endl;
	cin >> circleRad;
	
	Circle answer(circleRad);
	cout << "The area is " << answer.getArea() << endl;
	cout << "The diameter is " << answer.getDiameter() << endl;
	cout << "The circumference is " << answer.getCircumference() << endl;
    return 0;
}