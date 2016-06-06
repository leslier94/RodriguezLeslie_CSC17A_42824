/* 
 * File:   GradedActivity.h
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 8:07 PM
 */

#ifndef GRADEDACTIVITY_H
#define	GRADEDACTIVITY_H

using namespace std;

class GradedActivity
{
protected:
    double score;
public:
    GradedActivity ()
    {
        score=0.0;
    }
    GradedActivity(double s)
    {
        score=s;
    }
    void setScore (double s)
    {
        score=s;
    }
    double getScore () const
    {
        return score;
    }
};

#endif	/* GRADEDACTIVITY_H */

