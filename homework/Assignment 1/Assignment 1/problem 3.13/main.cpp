//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  float propValue;
	float assesValue;
	float propTax;
	cout << fixed << setprecision(2);
	cout << "What is the actual value of the piece of property ? " << endl;
	cin >> propValue;
	assesValue = propValue*.6;
	propTax = (assesValue / 100)*.64;

	cout << "Actual Value of the property:    $" << propValue << endl;
	cout << "Assesment Value of the property: $" << assesValue<< endl;
	cout << "Property Tax of the property:    $" << propTax << endl;


    return 0;
}