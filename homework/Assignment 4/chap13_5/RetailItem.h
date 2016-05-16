/* 
 * File:   RetailItem.h
 * Author: rcc
 *
 * Created on May 2, 2016, 3:05 PM
 */

#ifndef RETAILITEM_H
#define	RETAILITEM_H
using namespace std;

class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	RetailItem (string d, int u, double p)
	{
		description = d;
		unitsOnHand = u;
		price = p;
	}
	void setDescription(string);
	void setUnits(int);
	void setPrice(double);
	string getDescription();
	int getUnits();
	double getPrice();
	
};

void RetailItem::setDescription(string des)
{
	description = des;
}
void RetailItem::setUnits(int un)
{
	unitsOnHand = un;
}
void RetailItem::setPrice(double pri)
{
	price = pri;
}
string RetailItem::getDescription()
{
	return description;
}
int RetailItem::getUnits()
{
	return unitsOnHand;
}
double RetailItem::getPrice()
{
	return price;
}


#endif	/* RETAILITEM_H */

