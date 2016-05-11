//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    string month;
	unsigned short year;
	float collected;
	float csalestax;
	float ssalestax;
	float tsalestax;
	float sales;
	cout << fixed << setprecision(2);
	cout << "Enter the month " << endl;
	cin >> month;
	cout << "Enter the year"<< endl;
	cin >> year;
	cout << "Enter the total collected" << endl;
	cin >> collected;
	sales = collected / 1.06;
	csalestax = sales*.02;
	ssalestax = sales*.04;
	tsalestax = csalestax + ssalestax;
	

	cout << "Month: " << month << endl;
	cout << "Year:  "<< year << endl;
	cout << "------------------" << endl;
	cout << "Total Collected:    $" << collected<< endl;
	cout << "Sales:              $" << sales<< endl;
	cout << "Country Sales Tax:  $" << csalestax<< endl;
	cout << "State Sales Tax:    $" << ssalestax << endl;
	cout << "Total Sales Tax:    $" << tsalestax << endl;





    return 0;
}