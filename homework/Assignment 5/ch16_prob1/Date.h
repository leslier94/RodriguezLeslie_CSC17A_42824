/* 
 * File:   Date.h
 * Author: Leslie Rodriguez
 *
 * Created on May 2, 2016, 1:28 PM
 */

#ifndef DATE_H
#define	DATE_H
#include <iostream>
#include <cstdlib>
using namespace std;

//Class declaration

class Date
{
private :
    int month;
    int day;
    int year;

public:
    class InvalidMonth
    { };
    class InvalidDay
    { };
    Date ()
    {
        month=0;
        day=0;
        year=0;
    }
void setDay(int);

void setYear(int y)
{
    year=y;
}
void setMonth (int);
//Displaying grabbed values
void display1()
{
    cout << month << "/" << day << "/" << year << endl;
}

void display2()
{
    string months[] = { "January", "February", "March",
    "April", "May", "June", "July",
    "August", "September", "October",
    "November", "December"};

    cout << months[month - 1] << " " << day << " " << year << endl;
}
void display3()
{
    string months[] = { "January", "February", "March",
    "April", "May", "June", "July",
    "August", "September", "October",
    "November", "December"};

    cout << day << " " << months[month-1] << " " << year << endl;

}
    
};

//Assigning values




#endif	/* DATE_H */