/* 
 * File:   main.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 1:25 AM
 */

#include <cstdlib>
#include <iostream>
#include "Time.h"
#include "MilTime.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int hour;
    int sec;
    char choice;
    cout << "Enter hour " << endl;
    cin >> hour;

    cout << "Enter seconds " << endl;
    cin >> sec;
    cout << "Enter am or pm " << endl;
    cin >> choice;
    Time stand(hour, sec);
    MilTime mil(hour, sec);
       if (choice=='a')
    {
         cout << "In military time that is " << stand.getHour()/100;
         cout << stand.getHour()%100 <<":"<< stand.getSec() << endl;
    }

    else if (choice=='p'){
   
        cout <<"In military time that is " << mil.getMilHour();
        cout << stand.getHour()%100 << ":" << mil.getMilSec() << endl;
    }
    
    return 0;
}

