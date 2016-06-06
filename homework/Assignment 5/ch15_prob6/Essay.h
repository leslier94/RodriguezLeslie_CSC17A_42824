/* 
 * File:   Essay.h
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 8:07 PM
 */

#ifndef ESSAY_H
#define	ESSAY_H
#include "GradedActivity.h"
using namespace std;

class Essay: public GradedActivity
{
private:
    int gram;
    int spell;
    int len;
    int con;
public:
    Essay ()
    {
        gram=0;
        spell=0;
        len=0;
        con=0;
    }
    Essay (int g, int s, int l, int c)
    {
        set(g, s, l, c);
    }
    void set(int, int ,int, int);

    int getGram ()
    {
        return gram;
    }
    int getSpell ()
    {
        return spell;
    }
    int getLen ()
    {
        return len;
    }
    int getCon ()
    {
        return con;
    }
    
    
};

#endif	/* ESSAY_H */

