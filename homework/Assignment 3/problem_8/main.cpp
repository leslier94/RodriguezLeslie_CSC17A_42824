/*
 * File:   main.cpp
 * Author: Leslie Rodriguez
 * Created on April 4, 2016, 11:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 *
 */

void arrayToFile(char file1[], int *filePtr, int arrSize);
void fileToArray(char file1[], int *filePtr, int arrSize);

int main(int argc, char** argv) {
    const int SIZE = 5;
    int array[] = {1, 2, 3, 4, 5};
    int array2[SIZE];
    int *arr;
    int *arr2;
    arr = array;
    arr2 = array2;
    char fileName[SIZE];
    cout << "Enter a file name" << endl;
    cin >> fileName;
    arrayToFile(fileName, arr, SIZE);
    fileToArray(fileName, arr2, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

void arrayToFile(char file1[], int *filePtr, int arrSize) {
    fstream file;
    file.open(file1, ios::in | ios::binary);
    for (int i = 0; i < arrSize; i++) {
        file.write(reinterpret_cast<char *> (filePtr), sizeof (filePtr));
    }
    file.close();
}

void fileToArray(char file1[], int *filePtr, int arrSize) {
    fstream file;
    file.open(file1, ios::in | ios::binary);
    for (int i = 0; i < arrSize; i++) {
        file.read(reinterpret_cast<char *> (filePtr), sizeof (filePtr));
    }
    file.close();
}