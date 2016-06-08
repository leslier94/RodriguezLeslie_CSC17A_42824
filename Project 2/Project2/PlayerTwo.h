/* 
 * File:   PlayerTwo.h
 * Author: rcc
 *
 * Created on June 8, 2016, 2:39 PM
 */

#ifndef PLAYERTWO_H
#define	PLAYERTWO_H
#include <iostream>
using namespace std;

class PlayerTwo 
{
private:
    int level;
    string name;
public:
    PlayerTwo ();
    void setName(string n);
    void upLevel();
    int getHealth ();
    int getLevel ();
    string getName();
};
PlayerTwo::PlayerTwo()
{
    level=1;
}
void PlayerTwo::setName (string n)
{
    name=n;
}
void PlayerTwo::upLevel()
{
    level+=1;
}
int PlayerTwo::getLevel ()
{
    return level;
}
string PlayerTwo::getName ()
{
    return name;
}


#endif	/* PLAYERTWO_H */

