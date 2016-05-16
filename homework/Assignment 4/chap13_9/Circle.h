/* 
 * File:   Circle.h
 * Author: rcc
 *
 * Created on May 2, 2016, 3:18 PM
 */

#ifndef CIRCLE_H
#define	CIRCLE_H
using namespace std;

class Circle
{
private:
	double radius;
	double pi = 3.14159;
public:
	Circle(double radius);
	void setRadius(double);
	double getRadius()
	{
		return radius;
	}
	double getArea()
	{
		return (pi*(radius*radius));
	}
	double getDiameter()
	{
		return radius * 2;
	}
	double getCircumference()
	{
		return (2 * pi*radius);
	}
};

Circle::Circle(double r)
{
	radius = r;
}
void Circle::setRadius(double rad)
{
	radius = rad;
}


#endif	/* CIRCLE_H */

