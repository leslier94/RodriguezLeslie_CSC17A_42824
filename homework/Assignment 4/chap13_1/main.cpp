/* 
 * File:   main.cpp
 * Author: Leslie
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    Date fecha;

    int mon;
    int dy;
    int yr;
    
    do{
        cout << "Input month number ";
        cin >> mon;
    }while (mon <1||mon >12);

    do {
        cout << "Input day ";
        cin >> dy;
    } while (dy < 1 || dy>31);

        cout << "Input year ";
        cin >> yr;
//Assigning input values
    fecha.setMonth(mon);
    fecha.setDay(dy);
    fecha.setYear(yr);
//Displaying results
    fecha.display1();
    fecha.display2();
    fecha.display3();

    return 0;
}
