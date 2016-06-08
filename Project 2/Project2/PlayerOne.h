/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlayerOne.h
 * Author: Joeallen
 *
 * Created on June 7, 2016, 8:52 PM
 */

#ifndef PLAYERONE_H
#define PLAYERONE_H
#include <iostream>
using namespace std;

class PlayerOne
{
private:
    int level;
    string name;
public:
    PlayerOne ();
    void setName(string n);
    void upLevel();
    int getHealth ();
    int getLevel ();
    string getName();
};
PlayerOne::PlayerOne()
{
    level=1;
}
void PlayerOne::setName (string n)
{
    name=n;
}
void PlayerOne::upLevel()
{
    level+=1;
}
int PlayerOne::getLevel ()
{
    return level;
}
string PlayerOne::getName ()
{
    return name;
}
#endif /* PLAYERONE_H */