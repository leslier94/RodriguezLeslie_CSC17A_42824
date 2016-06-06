/* 
 * File:   Date.cpp
 * Author: Ariana & Gilbert
 *
 * Created on June 1, 2016, 9:44 PM
 */

#include <cstdlib>
#include "Date.h"
using namespace std;

void Date::setDay(int d)
{
    if (d>1&&d<31)
    {
        day=d;
    }
    else
    { 
        throw InvalidDay();
    }
}
void Date::setMonth(int m)
{
    if (m>1&&m<12)
    {
        month=m;
    }
    else
    { 
        throw InvalidMonth();
    }
}
