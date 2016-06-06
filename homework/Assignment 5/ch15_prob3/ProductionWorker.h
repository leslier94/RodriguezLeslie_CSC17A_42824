/* 
 * File:   ProductionWorker.h
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 9:43 PM
 */

#ifndef PRODUCTIONWORKER_H
#define	PRODUCTIONWORKER_H

#include <iostream>

class ProductionWorker
{
    private:
        int shift;
        double rate;
    public:
        ProductionWorker(int s, double r)
        {
            shift=s;
            rate=r;
        }
        
        void setShift(int s)
        {
            shift=s;
        }
        void setRate(double r)
        {
            rate=r;
        }   
        int getShift()
        {return shift;}
        double getRate ()
        {return rate;}
      
      
};


#endif	/* PRODUCTIONWORKER_H */

