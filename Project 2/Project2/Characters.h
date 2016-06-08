/* 
 * File:   Characters.h
 * Author: rcc
 *
 * Created on June 8, 2016, 11:27 AM
 */

#ifndef CHARACTERS_H
#define	CHARACTERS_H

class Characters
{
private: 
    static int objectCount;
public: 
    Characters()
    {
        objectCount++;
    }
    int getObjectCount () const 
    {
        return objectCount;
    }
};
int Characters::objectCount=0;


#endif	/* CHARACTERS_H */

