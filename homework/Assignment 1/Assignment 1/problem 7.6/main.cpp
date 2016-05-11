//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int smallestNum(int numbers[], int size);
short largestNum(int numbers[], int size);
short totalNum(int numbers[], int size);
float avgNum(int numbers[], int size);

//Execution Begins Here
int main(int argc, char** argv) {
const unsigned short size = 8;
	int numbers[size];
	short count=0;
	short min=0;
	short max=0;
	short total=0;
	float average=0;
	ifstream inputFile;
	inputFile.open("numbers.txt");

	for (count = 0; count < size; count++)
		inputFile >> numbers[count];

	for (count = 0; count < size; count++)
	{
		min = smallestNum(numbers, size);
	}
	for (count = 0; count < size; count++)
	{
		max = largestNum(numbers, size);
	}
	for (count = 0; count < size; count++)
	{
		total = totalNum(numbers, size);
	}
	for (count = 0; count < size; count++)
	{
		average = avgNum(numbers, size);
	}
	cout << "The lowest number in the array is " << min << endl;
	cout << "The highest number in the array is " << max << endl;
	cout << "The total sum of the array is " << total << endl;
	cout << "The average of the array is  " << average << endl;

    return 0;
}
int smallestNum(int numbers[], int size)
{
	short min=0;
	short count=0;
	min = numbers[0];
	for (count = 0; count < size; count++)
	{
		if (numbers[count] < min)
		min = numbers[count];
		
	}
	return min;
}
short largestNum(int numbers[], int size)
{
	short max=0;
	short count=0;
	max = numbers[0];
	for (count = 0; count < size; count++)
	{
		if (numbers[count] > max)
			max = numbers[count];

	}
	return max;
}
short totalNum(int numbers[], int size)
{
	short total=0;
	short count;
	for (count = 0; count < size; count++)
	{
		total += numbers[count];
	}
	return total;
}
float avgNum(int numbers[], int size)
{
	short total = 0;
	float average=0;
	short count;
	for (count = 0; count < size; count++)
	{
		total += numbers[count];
		average = total / size;
	}
	return average;
}