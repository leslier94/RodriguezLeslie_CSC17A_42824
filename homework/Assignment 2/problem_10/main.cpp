//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int setArray[], int size);


int main()
{
const int size = 5;
int setNums[size] = {2, 3, 5, 5, 6};
displayArray(setNums, size);

return 0;
}

void displayArray(int setArray[], int size)
{
int *num = setArray;
cout << "The numbers in the array are : " << *num <<" ";
while (num < &setArray[size-1])
{
num++;
cout << *num << " ";
}
cout << endl;
cout << "The numbers in the array reversed are : " << *num << " ";
while (num > setArray)
{
num--;
cout << *num << " ";
}
cout << endl;
}