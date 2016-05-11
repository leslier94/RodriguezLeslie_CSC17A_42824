//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
unsigned int organisms;
	unsigned short percentage;
	unsigned short days;

	cout << "What is the starting number of organisms?" << endl;
	cin >> organisms;
	while (organisms < 2)
	{
		cout << "Input Validation: please input a greater number" << endl;
		cin >> organisms;
	}
	cout << "What is the percent average daily population increase?" << endl;
	cin >> percentage;
	while (percentage < 0)
	{
		cout << "Input Validation: please do not input negative numbers" << endl;
		cin >> percentage;
	}
	cout << "What is the number of days given to multiply? " << endl;
	cin >> days;
	while (days < 1)
	{
		cout << "Input Validation: please input a greater number " << endl;
		cin >> days;
	}
	for (unsigned int i = 1; i <= days; i++)
	{
		cout << "Day : " << i << endl;
		organisms = organisms + ((percentage*organisms)/100);
		cout << "Size of population " << organisms << endl;

	}
    return 0;
}
