#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include "NumDays.h"

using namespace std;





int main(int argc, char** argv) {


	int hour;
	

	cout << "Enter number of hours " << endl;
	cin >> hour;
	NumDays d(hour);
	d.setDays(hour);
	cout << fixed << showpoint << setprecision(2);
	cout << "Number of days worked : " << d.getTot() << endl;
	//d.print(hour);
	int hr = 0;
	int dhr = 0;
	hr = ++hour;
	cout << "Incremented hour " << hr << endl;
	d.setDays(hr);
	cout << "New days after incremented hours " << d.getTot() << endl;
	dhr = --(--hour);
	cout << "Decremented hours " << dhr << endl;
	d.setDays(dhr);
	cout << "New days after decremented hours " << d.getTot() << endl;
	return 0;
}