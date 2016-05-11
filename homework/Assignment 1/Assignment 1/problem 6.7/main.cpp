//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float celcius(short f);
//Execution Begins Here
int main(int argc, char** argv) {
cout << "Fahrenheit:     Celsius:" << endl;
	cout << fixed << setprecision(2);
	
	for (int i = 0; i <= 20; i++)
	
	{
		cout << i << setw(20) << celcius(i) << endl;
	}
    return 0;
}
float celcius(short f)
{
	return ((f - 32) * 5.00 / 9.00);
}