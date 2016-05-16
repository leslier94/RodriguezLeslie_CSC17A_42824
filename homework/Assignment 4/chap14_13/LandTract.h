/* 
 * File:   LandTract.h
 * Author: Ariana & Gilbert
 *
 * Created on May 2, 2016, 11:19 PM
 */

#ifndef LANDTRACT_H
#define	LANDTRACT_H

using namespace std;

class LandTract
{
private:
	int length;
	int width;
public:
	LandTract(int l=0, int w=0)
	{
		length = l;
		width = w;
	}
	void setLength(int l)
	{
		length = l;
	}
	void setWidth(int w)
	{
		width = w;
	}

	int getLength() const
	{
		return length;
	}
	int getWidth() const
	{
		return width;
	}
	int getArea()const
	{
		return length*width;
	}
};

#endif	/* LANDTRACT_H */

