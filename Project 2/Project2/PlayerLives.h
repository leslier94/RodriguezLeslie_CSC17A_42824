/* 
 * File:   PlayerLives.h
 * Author: rcc
 *
 * Created on June 8, 2016, 11:35 AM
 */

#ifndef PLAYERLIVES_H
#define	PLAYERLIVES_H
#include "Money.h"

class PlayerLives: public Money 
{
    private:
        int life;

    public:
       PlayerLives(): Money ()
       {
           life=0;
       }
       PlayerLives(int q): Money ()
       {
           setLife(q);
       }
       void setLife (int q)
       {
           life=q;
       }
       void loseLife ()
       {
           life-=1;
       }
       int getLife ()
       {
           return life/25;
       }
};

#endif	/* PLAYERLIVES_H */

