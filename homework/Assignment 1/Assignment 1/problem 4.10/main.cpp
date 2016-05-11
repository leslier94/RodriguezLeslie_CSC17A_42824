//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
unsigned short retailPrice = 99;
unsigned short quanity;
float cost;
	cout << "Enter amount of packages purchased " << endl;
	cin >> quanity;
	cout << fixed << setprecision(2);
	if (quanity == 0)
	{
		cout << "Input Valiation: Make sure the number is greater than 0" << endl;
	}
	else if (quanity >= 1 && quanity <= 9)
	{
		cost = quanity*retailPrice;
		cout << "No discount given, your total cost is " << cost << endl;
	}
	else if (quanity >= 10 && quanity <= 19)
	{
		cost = retailPrice*quanity - (retailPrice*quanity *.2);
		cout << "Your total cost of purchase is $" << cost << endl;
	}
	else if (quanity >= 20 && quanity <= 49)
	{
		cost = retailPrice*quanity - (retailPrice*quanity *.3);
		cout << "Your total cost of purchase is $" << cost << endl;
	}
	else if (quanity >= 50 && quanity <= 99)
	{
		cost = retailPrice*quanity - (retailPrice*quanity *.4);
		cout << "Your total cost of purchase is $" << cost << endl;
	}
	else if (quanity >= 100)
	{
		cost = retailPrice*quanity - (retailPrice*quanity *.5);
		cout << "Your total cost of purchase is $" << cost << endl;
	}
	
    return 0;
}
