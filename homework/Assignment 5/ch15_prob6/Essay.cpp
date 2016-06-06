/* 
 * File:   Essay.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 8:35 PM
 */

#include <cstdlib>
#include <iostream>
#include "Essay.h"
using namespace std;

/*
 * 
 */
void Essay:: set(int g, int s, int l, int c)
{
    double totScore;
    gram=g;
    spell=s;
    len=l;
    con=c;
    totScore=gram+spell+len+con;
    setScore(totScore);
}

