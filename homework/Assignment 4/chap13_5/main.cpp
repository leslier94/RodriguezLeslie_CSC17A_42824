/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "RetailItem.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {


	string des;
	int un = 0;
	double pri=0;

		cout << "Enter description of item " << endl;
		getline(cin, des);
		cout << "Enter units of item " << endl;
		cin >> un;
		cout << "Enter price " << endl;
		cin >> pri;
		cin.ignore();
		RetailItem itemOne(des, un, pri);
		itemOne.setDescription(des);
		itemOne.setUnits(un);
		itemOne.setPrice(pri);
		
		cout << "Enter description of item " << endl;
		getline(cin, des);
		cout << "Enter units of item " << endl;
		cin >> un;
		cout << "Enter price " << endl;
		cin >> pri;
		cin.ignore();
		RetailItem itemTwo(des, un, pri);
		itemTwo.setDescription(des);
		itemTwo.setUnits(un);
		itemTwo.setPrice(pri);

		cout << "Enter description of item " << endl;
		getline(cin, des);
		cout << "Enter units of item " << endl;
		cin >> un;
		cout << "Enter price " << endl;
		cin >> pri;
		cin.ignore();
		RetailItem itemThree(des, un, pri);
		itemThree.setDescription(des);
		itemThree.setUnits(un);
		itemThree.setPrice(pri);


		cout << endl;
		cout << endl;
		cout << "***********************************************************" << endl;
		cout << "***********************************************************" << endl;
               
		cout << "Item #1: " << setw(7) << itemOne.getDescription() << setw(7) <<itemOne.getUnits() << setw(7) << itemOne.getPrice()<< setw(7)<< endl;
		cout << "Item #2: " << setw(7) << itemTwo.getDescription() << setw(7) << itemTwo.getUnits() << setw(7) << itemTwo.getPrice()<< setw(7)<< endl;
		cout << "Item #3: " << setw(7) << itemThree.getDescription() << setw(7) << itemThree.getUnits()<< setw(7)  << itemThree.getPrice() << setw(7)<< endl;

    return 0;
}