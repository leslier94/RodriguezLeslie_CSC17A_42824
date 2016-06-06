/* 
 * File:   MilTime.h
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 1:30 AM
 */

#ifndef MILTIME_H
#define	MILTIME_H
#include "Time.h"

class MilTime : public Time 
{
private:
    int milHour;
    int milSec;
public:
    class BadHour 
    { };
    class BadSeconds
    { };
    MilTime():Time()
    {
        milHour=0;
        milSec=0;
    }
    MilTime(int h, int s): Time ()
    {setMilTime(h,s);}
    void setMilTime(int h, int s)
    {
        milHour=0;
        milSec=0;
        //sec=milSec;  
    }
    int getMilHour ()
    {
        
        return ((milHour/100)+12);
    }
    int getMilSec ()
    {
        return milSec;
    }
   
};


#endif	/* MILTIME_H */

