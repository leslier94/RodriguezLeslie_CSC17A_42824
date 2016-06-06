/* 
 * File:   MilTime.cpp
 * Author: Ariana & Gilbert
 *
 * Created on June 1, 2016, 10:06 PM
 */

#include <cstdlib>
#include "MilTime"
using namespace std;

void MilTime::setMilTime(int h, int s)
{
    if (h>0&&h<2359)
    {
        milHour=h;
    }
    else
    { 
        throw BadHour();
    }
    if (s>0&&s<59)
    {
        milSec=s;
    }
    else
    { 
        throw BadSeconds();
    }
}

