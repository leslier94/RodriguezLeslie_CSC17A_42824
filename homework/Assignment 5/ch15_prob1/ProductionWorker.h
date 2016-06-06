/* 
 * File:   ProductionWorker.h
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 9:43 PM
 */

#ifndef PRODUCTIONWORKER_H
#define	PRODUCTIONWORKER_H
#include "Employee.h"
#include <iostream>
#include <iomanip>
class ProductionWorker
{
    private:
        int shift;
        float rate;
    public:
        ProductionWorker(int s, float r)
        {
            shift=s;
            rate=r;
        }
        
        void setShift(int s)
        {
            shift=s;
        }
        void setRate(float r)
        {
            rate=r;
        }   
        int getShift()
        {return shift;}
        float getRate ()
        {return 1.0f*rate;}
      
      
};


#endif	/* PRODUCTIONWORKER_H */

