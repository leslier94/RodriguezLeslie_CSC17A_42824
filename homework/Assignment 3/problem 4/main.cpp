/*
 * File:   main.cpp
 * Author: Leslie Rodriguez
 *
 * Created on April 4, 2016, 11:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int wordCounter(char *);

int main(int argc, char** argv) {
    const int SIZE = 100;
    char phrase[SIZE];
    cout << "Enter a phrase " << endl;
    cin.getline(phrase, SIZE);
    cout << "Your phrase contains " << wordCounter(phrase);
    cout << " words" << endl;
    return 0;
}

int wordCounter(char *count) {
    int words = 1;
    while (*count != '\0') {
        if (*count == ' ')
            words++;
        count++;
    }
    return words;
}