/* 
 * File:   NumDays.h
 * Author: Ariana & Gilbert
 *
 * Created on May 2, 2016, 11:15 PM
 */

#ifndef NUMDAYS_H
#define	NUMDAYS_H
using namespace std;

/*
*
*/
class NumDays
{
private:
	int hours;
public:
	NumDays(int hour);
	void setDays(int);
	int getDays();
	double getTot();
	//void print(int);

};

NumDays::NumDays(int hour)
{
	hours = hour;
}

void NumDays::setDays(int hour)
{
	hours = hour;
}
int NumDays::getDays()
{
	return hours;
}
double NumDays::getTot()
{
	return (1.0f*getDays() / 8);
}

/*void NumDays:: print(int hour)
{
	int hr=0;
	int dhr=0;
	hr = ++hour;
	cout << "Incremented hour " << hr << endl;

	dhr = --hour;
	cout << "Decremented hours " << dhr << endl;

}
*/


#endif	/* NUMDAYS_H */

