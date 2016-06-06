/* 
 * File:   main.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 29, 2016, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include <string>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int monBon;
    int reqHrs;
    int totHrs;
    int shift;
    double rate;
   
;
    cout << "Enter employee's shift " << endl;
    cin >> shift;
    cout << "Enter employee's hourly pay rate " << endl;
    cin >> rate;
    //cout << "Enter monthly bonus " << endl;
    //cin >> monBon;

    cout << "Enter hours completed " << endl;
    cin >> totHrs;
    
    ProductionWorker infoA(shift, rate);
    TeamLeader infoB(totHrs);
    
    cout << "Employee Information " << endl;
    cout << "Employee's Pay Rate: " << infoA.getRate() << endl;
    cout << "Employee's Shift: " << infoA.getShift() << endl;
    cout << "Bonus able to be earned: " << infoB.getMonBon() << endl;
    cout << "Required hours to be earned " << infoB.getReqHrs() << endl;
    cout << "Hours completed by employee: " << infoB.getTotHrs() << endl;
    if (infoB.getTotHrs()<infoB.getReqHrs())
    {
        cout <<"Hours for the year were not completed " << endl;
 
    }
    else 
    {
        cout << "Hours for the year were completed " << endl;
    }
    return 0;
}

