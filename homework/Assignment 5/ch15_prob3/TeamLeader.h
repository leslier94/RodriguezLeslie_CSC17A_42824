/* 
 * File:   TeamLeader.h
 * Author: Ariana & Gilbert
 *
 * Created on May 30, 2016, 1:00 AM
 */
#include <iostream>
using namespace std;
#ifndef TEAMLEADER_H
#define	TEAMLEADER_H
#include "ProductionWorker.h"


class TeamLeader 
{
private:
    int monBon=500;
    int reqHrs=100;
    int totHrs;
public:
    TeamLeader (int t)
    {
        totHrs=t;
    }
    
    void setTotHrs (int t)
    {
        totHrs=t;
    }
    int getMonBon()
    {
        return monBon;
    }
   int getReqHrs()
    {
        return reqHrs;
    }
    int getTotHrs()
    {
        return totHrs;
    }

};

#endif	/* TEAMLEADER_H */

