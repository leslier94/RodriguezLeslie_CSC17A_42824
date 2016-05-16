/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

	int yearModel;
	string make;
        int choice;
		cout << "Enter year of car" << endl;
		cin >> yearModel;
		cout << "Enter make of car" << endl;
		cin >> make;
		Car autoMobile (yearModel, make);
                autoMobile.setYear(yearModel);
                autoMobile.setMake(make);
                for (int i=0;i<100;i++){
               cout << "Click 1 to accelerate and 2 to brake" << endl;
               cin >> choice;

               if (choice == 1)
               {
                   cout << "The speed of the model " << autoMobile.getMake() << " year " ;
                   cout << autoMobile.getYear()<< " is " << autoMobile.accelerate() << endl;
               }
               else 
               {
                   cout << "The speed of the model " << autoMobile.getMake() << " year " ;
                   cout << autoMobile.getYear()<< " is " << autoMobile.brake() << endl;
               }
                }
    return 0;
}