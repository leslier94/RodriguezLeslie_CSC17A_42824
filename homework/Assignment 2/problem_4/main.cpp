//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

void markSrt(int *a, int *indx, int n);
void showArray(int *, string *, int *, int arySize);
void getName(int*, string *, int);
int *fillIndex(int);

int main()
{
int numSize;
int count;
int total = 0;
int average = 0;

//Getting the size of the array
cout << "How many scores would you like to enter?" << endl;
cin >> numSize;
int *testScores;
string *names = new string[numSize];
int *index = fillIndex(numSize);
testScores = new int[numSize];
/*cout << "Enter your test scores " << endl;
for (count = 0; count < numSize; count++)
{
cout << "Test number " << (count + 1) << ":" << endl;
cin >> testScores[count];
}*/
getName(testScores, names, numSize);
//Average of the numbers
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

markSrt(testScores, index, numSize);
cout << "the sorted array is : ";
showArray(testScores, names, index, numSize);
delete[]testScores;

return 0;
}



void markSrt(int *a, int *indx, int n) 
{
for (int pos = 0; pos < n - 1; pos++) {
for (int row = pos + 1; row < n; row++) {
if (a[indx[pos]] > a[indx[row]]) {
int temp;
temp = indx[pos];
indx[pos] = indx[row];
indx[row] = temp;
}
}
}
}

void showArray(int *testScores, string *name, int *idx, int arySize)


{
for (int count = 0; count < arySize; count++)
cout << name[idx[count]] << " " << testScores[idx[count]] << " ";
cout << endl;
}
void getName(int *a, string *b, int size)
{
for (int i = 0; i < size; i++)
{
cout << "Student number " << (i + 1) << "'s name" << endl;
cin >> b[i];
cout << "Enter " << b[i] << "'s test score" << endl;
cin >> a[i];
}

}

int *fillIndex(int n)
{
int *a = new int[n];
for (int i = 0; i < n; i++)
{
*(a + i) = i;
}
return a;
}

