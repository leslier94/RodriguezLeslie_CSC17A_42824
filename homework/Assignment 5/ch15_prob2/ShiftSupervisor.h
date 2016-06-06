/* 
 * File:   ShiftSupervisor.h
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 10:45 PM
 */

#ifndef SHIFTSUPERVISOR_H
#define	SHIFTSUPERVISOR_H

using namespace std;

#include <iostream>

class ShiftSupervisor 
{
private:
    int salary;
    int bonus;
    
public:
    ShiftSupervisor (int s, int b)
    {
        salary=s;
        bonus=b;
    }
    void setSalary(int s)
    {
        salary=s;
    }
    void setBonus (int b)
    {
        bonus=b;
    }
    int getSalary()
    {
        return salary;
    }
    int getBonus()
    {
        return bonus;
    }
};




#endif	/* SHIFTSUPERVISOR_H */