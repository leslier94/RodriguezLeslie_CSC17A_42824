/* 
 * File:   main.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include <string>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
  //  Employee info;
    string name;
    int num;
    int date;
    int shift;
    float rate;
   
    cout << fixed << setprecision(2);
    cout << "Enter employee name " << endl;
    getline (cin, name);
    cout << "Enter employee number " << endl;
    cin >> num;
    cout << "Enter employee's hire date " << endl;
    cout << "Format date in numbers " << endl;
    cout << "Ex: December 15, 1994 would be 121594" << endl;
    cin >> date;
    cout << "Enter employee's shift " << endl;
    cin >> shift;
    cout << "Enter employee's hourly pay rate " << endl;
    cin >> rate;
    
    ProductionWorker infoA(shift, rate);
    Employee infoB(name, num, date);
    
    cout << "Employee Information " << endl;
    cout << "Employee's Name: " << infoB.getName() << endl;
    cout << "Employee Number: " << infoB.getNum() << endl;
    cout << "Employee's Hire Date: " << infoB.getDate() << endl;
    cout << "Employee's Pay Rate: " << infoA.getRate() << endl;
    cout << "Employee's Shift: " << infoA.getShift() << endl;

    return 0;
}

