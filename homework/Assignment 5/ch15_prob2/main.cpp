/* 
 * File:   main.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "Employee.h"
#include "ShiftSupervisor.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
  //  Employee info;
    string name;
    int num;
    int date;
    int salary;
    int bonus;
   
    
    cout << "Enter employee name " << endl;
    getline (cin, name);
    cout << "Enter employee number " << endl;
    cin >> num;
    cout << "Enter employee's hire date " << endl;
    cout << "Format date in numbers " << endl;
    cout << "Ex: December 15, 1994 would be 121594" << endl;
    cin >> date;
    cout << "Enter shift supervisor's annual salary " << endl;
    cin >> salary;
    cout << "Enter earned yearly bonus " << endl;
    cin >> bonus;
    
    ShiftSupervisor infoA(salary, bonus);
    Employee infoB(name, num, date);
    
    cout << "Employee Information " << endl;
    cout << "Employee's Name: " << infoB.getName() << endl;
    cout << "Employee Number: " << infoB.getNum() << endl;
    cout << "Employee's Hire Date: " << infoB.getDate() << endl;
    cout << "Shift Supervisor's Annual Salary: " << infoA.getBonus() << endl;
    cout << "Shift Supervisor's Annual Bonus: " << infoA.getBonus() << endl;


    
    return 0;
}

