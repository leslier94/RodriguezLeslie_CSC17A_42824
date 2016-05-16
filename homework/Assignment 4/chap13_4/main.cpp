/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

	string nam;
	string add;
	int ag=0;
	int num=0;

		cout << "Enter your name " << endl;
		getline(cin, nam);
		cout << "Enter your address " << endl;
		getline(cin, add);
		cout << "Enter your age " << endl;
		cin >> ag;
		cout << "Enter your phone number " << endl;
		cin >> num;
		Person myInfo(nam, add, ag, num);
		myInfo.setName(nam);
		myInfo.setAddress(add);
		myInfo.setAge(ag);
		myInfo.setphoneNum(num);
                cin.ignore();
		cout << "Enter friends name " << endl;
		getline(cin, nam);
		cout << "Enter friends address " << endl;
		getline(cin, add);
		cout << "Enter friends age " << endl;
		cin >> ag;
		cout << "Enter friends phone number " << endl;
		cin >> num;
		Person myFriend(nam, add, ag, num);
		myFriend.setName(nam);
		myFriend.setAddress(add);
		myFriend.setAge(ag);
		myFriend.setphoneNum(num);
                cin.ignore();
		cout << "Enter family members name " << endl;
		getline(cin, nam);
		cout << "Enter family members address " << endl;
		getline(cin, add);
		cout << "Enter family members age " << endl;
		cin >> ag;
		cout << "Enter family members phone number " << endl;
		cin >> num;
		Person myFamily(nam, add, ag, num);
		myFamily.setName(nam);
		myFamily.setAddress(add);
		myFamily.setAge(ag);
		myFamily.setphoneNum(num);
	
		cout << endl;
		cout << endl;
		cout << "***********************************************************" << endl;
		cout << "***********************************************************" << endl;
		cout << "                   Personal information " << endl;

	cout << "Name:  " << myInfo.getName() << endl;
	cout << "Address: " << myInfo.getAddress() << endl;
	cout << "Age: " << myInfo.getAge() << endl;
	cout << "Phone Number: " << myInfo.getphoneNum() << endl;

	cout << "Name:  " << myFriend.getName() << endl;
	cout << "Address: " << myFriend.getAddress() << endl;
	cout << "Age: " << myFriend.getAge() << endl;
	cout << "Phone Number: " << myFriend.getphoneNum() << endl;

	cout << "Name:  " << myFamily.getName() << endl;
	cout << "Address: " << myFamily.getAddress() << endl;
	cout << "Age: " << myFamily.getAge() << endl;
	cout << "Phone Number: " << myFamily.getphoneNum() << endl;

    return 0;
}