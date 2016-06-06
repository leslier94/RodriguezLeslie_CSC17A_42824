/* 
 * File:   main.cpp
 * Author: Leslie
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
//#include <string>
#include "Date.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {


    int mon;
    int dy;
    int yr;

    Date fecha;
    cout << "Input month number " << endl;
    cin >> mon;

    cout << "Input day " << endl;
    cin >> dy;
    
    cout << "Input year " << endl;
    cin >> yr;
    try {
     fecha.setDay(dy);   
     fecha.setYear(yr);
     fecha.setMonth(mon);
     fecha.display1();
     fecha.display2();
     fecha.display3();
    }
        
    catch (Date::InvalidDay)
    {
        cout << "Invalid Day " << endl;
    }
    catch (Date::InvalidMonth)
    {
        cout << "Invalid month " << endl;
    }

        

   // 
//Displaying results
    

    return 0;
}

