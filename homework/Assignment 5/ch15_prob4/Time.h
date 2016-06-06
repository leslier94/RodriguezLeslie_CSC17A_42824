/* 
 * File:   Time.h
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 1:25 AM
 */

#ifndef TIME_H
#define	TIME_H

using namespace std;

class Time
{
protected: 
    int hour;
    int sec;
public:
    Time ()
    {hour=0;sec=0;}
    Time (int h, int s)
    {hour=h;sec=s;}
    int getHour() 
    {
        return hour;
    }
    int getSec () 
    {
        return sec;
    }
         


};

#endif	/* TIME_H */

