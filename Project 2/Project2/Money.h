/* 
 * File:   MOney.h
 * Author: rcc
 *
 * Created on June 8, 2016, 11:32 AM
 */

#ifndef MONEY_H
#define	MONEY_H
class Money
{
protected: 
    int quarters;
public: 
    Money()
    {
        quarters=0;
    }
    Money (int q)
    {
        quarters=q;
    }
    void setMoney (int q)
    {
        quarters=q;
    }
    int getMoney ()
    {
        return quarters;
    }
};


#endif	/* MONEY_H */

