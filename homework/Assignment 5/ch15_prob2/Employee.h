/* 
 * File:   Employee.h
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 8:56 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;


class Employee 
{
private:
    string name;
    int num;
    int date;
public:
    Employee (string na, int nu, int d)
    {
        name = na;
        num=nu;
        date=d;
    }
    void setName(string na)
    {
        name=na;
    }
    void setNum (int nu)
    {
        num=nu;
    }
    void setDate(const char d)
    {
        date=d;
    }
    string getName ()
    {
        return name;
    }
    int getNum ()
    {
        return num;
    }
    int getDate ()
    {
        return date;
    }
};

#endif	/* EMPLOYEE_H */

