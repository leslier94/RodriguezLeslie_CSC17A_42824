/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include "Numbers.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
	int num;
	cout << "Enter number " << endl;
	cin >> num;
	Numbers n(num);
	n.setNum(num);
	n.print(num);
    return 0;
}