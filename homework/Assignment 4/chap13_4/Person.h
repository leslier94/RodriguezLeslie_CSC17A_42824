/* 
 * File:   Person.h
 * Author: rcc
 *
 * Created on May 2, 2016, 2:54 PM
 */

#ifndef PERSON_H
#define	PERSON_H

using namespace std;

class Person
{
private:
	string name;
	string address;
	int age;
	int phoneNum;
public:
	Person(string n, string ad, int a, int p)
	{
		name = n;
		address = ad;
		age = a;
		phoneNum = p;
	}
	void setName(string);
	void setAddress(string);
	void setAge(int);
	void setphoneNum(int);
	string getName();
	string getAddress();
	int getAge();
	int getphoneNum();
	
};

void Person::setName(string nam)
{
	name = nam;
}
void Person::setAddress(string add)
{
	address=add;
}
void Person::setAge(int ag)
{
	age = ag;
}
void Person::setphoneNum(int num)
{
	phoneNum = num;
}

string Person::getName()
{
	return name;
}
string Person::getAddress()
{
	return address;
}
int Person::getAge()
{
	return age;
}
int Person::getphoneNum()
{
	return phoneNum;
}


#endif	/* PERSON_H */

