//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
int *testScores;
int numSize;
int count;
int total = 0;
float average = 0;


cout << "How many scores would you like to enter?" << endl;
cin >> numSize;
testScores = new int[numSize];
cout << "Enter your test scores " << endl;
for (count = 0; count < numSize; count++)
{
cout << "Test number " << (count + 1) << ":" << endl;
cin >> testScores[count];
}

int lowest = testScores[0];
for (count = 0; count < numSize; count++)
{
if (testScores[count] < lowest)
lowest = testScores[0];
}
cout << "the lowest test score is " << lowest << endl;

for (count = 0; count < numSize; count++)
{
total += testScores[count];
}
average = (total - lowest) / (numSize-1);
cout << "The average after droping he lowest score is : " << average << endl;
return 0;
}
