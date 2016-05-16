/* 
 * File:   Car.h
 * Author: rcc
 *
 * Created on May 2, 2016, 1:47 PM
 */

#ifndef CAR_H
#define	CAR_H
using namespace std;

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	Car(int, string, int);
	int getSpeed();
	string getMake();
	int getYear();
        void setSpeed (int);
        void setMake(string);
        void setYear(int);
	int accelerate();
	int brake();
};

Car::Car(int y, string m, int s = 0)
{
	yearModel = y;
	make = m;
	speed=s;
}

void Car::setMake(string m)
{
    make=m;
}

void Car::setYear(int y)
{
    yearModel=y;
}

void Car::setSpeed(int s)
{
    speed=s;
}
int Car::getSpeed()
{
	return speed;
}
string Car::getMake()
{
	return make;
}
int Car::getYear()
{
	return yearModel;
}
	int Car::accelerate()
	{
            return speed+=5;
	}
	int Car::brake()
	{
            return speed-=5;
	}

#endif	/* CAR_H */
