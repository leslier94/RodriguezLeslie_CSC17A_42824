/* 
 * File:   Date.h
 * Author: Leslie Rodriguez
 *
 * Created on May 2, 2016, 1:28 PM
 */

#ifndef DATE_H
#define	DATE_H



using namespace std;

//Class declaration

class Date
{
private :
    int month;
    int day;
    int year;

public:
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void display1();
    void display2();
    void display3 ();
};

//Assigning values
void Date::setMonth(int m)
{
    month = m;
}

void Date::setDay(int d)
{
    day=d;
}

void Date::setYear(int y)
{
    year=y;
}
//Displaying grabbed values
void Date::display1()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::display2()
{
    string months[] = { "January", "February", "March",
    "April", "May", "June", "July",
    "August", "September", "October",
    "November", "December"};

    cout << months[month - 1] << " " << day << " " << year << endl;
}
void Date::display3()
{
    string months[] = { "January", "February", "March",
    "April", "May", "June", "July",
    "August", "September", "October",
    "November", "December"};

    cout << day << " " << months[month-1] << " " << year << endl;

}

#endif	/* DATE_H */