//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void arrSelectSort(int *, int arySize);
void showArray(int *, int arySize);


int main()
{
int *testScores;
int numSize;
int count;
int total = 0;
int average = 0;


cout << "How many scores would you like to enter?" << endl;
cin >> numSize;
testScores = new int[numSize];
cout << "Enter your test scores " << endl;
for (count = 0; count < numSize; count++)
{
cout << "Test number " << (count + 1) << ":" << endl;
cin >> testScores[count];
if (testScores[count] < 0)
{
cout << "Invalid input, enter another number" << endl;
cin >> testScores[count];
}
}

for (count = 0; count < numSize; count++)
{
total += testScores[count];
}
cout << "The numbers you entered are: ";
for (count = 0; count < numSize; count++)
{
cout << testScores[count] << " ";
}

average = total / numSize;
cout << endl;
cout << "The average is " << average << endl;

//    testScores = 0;
//int *arrPtrtestScores[count];
arrSelectSort(testScores, numSize);
cout << "the sorted array is :";
showArray(testScores, numSize);
delete[]testScores;

return 0;
}


void arrSelectSort(int *testScores, int arySize)
{
int startScan, minIndex;
int minElem;

for (startScan = 0; startScan < (arySize - 1); startScan++)
{
minIndex = startScan;
minElem = testScores[startScan];
for (int index = startScan + 1; index < arySize; index++)
{
if (*(testScores + index) < minElem)
{
minElem = testScores[index];
minIndex = index;
}
}
testScores[minIndex] = testScores[startScan];
testScores[startScan] = minElem;


}

}

void showArray(int *testScores, int arySize)

{
for (int count = 0; count < arySize; count++)
cout << testScores[count] << " ";
cout << endl;
}

