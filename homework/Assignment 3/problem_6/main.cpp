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

/*
 *
 */

int vowelCount(char *);
int constCount(char *);

int main(int argc, char** argv) {
    const int SIZE = 100;
    char phrase[SIZE];
    char choice;
    cout << "Enter a string " << endl;
    cin.getline(phrase, SIZE);
    cout << "A) Count the number of vowels in the string" << endl;
    cout << "B) Count the number of consonants in the string" << endl;
    cout << "C) Count both the vowels and consonants in the string" << endl;
    cout << "D) Enter another string" << endl;
    cout << "E) Exit the program" << endl;
    cin >> choice;
    if (choice == 'a') {
        cout << "The strng you entered contains " << vowelCount(phrase) << " vowels" << endl;
    } else if (choice == 'b') {
        cout << "The string you entered contains " << constCount(phrase) << " consonants" << endl;
    } else {
        exit(0);
    }
    return 0;
}

int vowelCount(char *count) {
    int vowels = 0;
    for (int i = 0; count[i] != '\0'; i++) {
        if (count[i] == 'a' || count[i] == 'e' || count[i] == 'i' || count[i] == 'o' || count[i] == 'u') {
            vowels++;
            count++;
        }
    }
    return vowels;
}

int constCount(char *count) {
    int consonant = 0;
    for (int i = 1; count[i] != '\0'; i++) {
        if (count[i] != 'a' || count[i] != 'e' || count[i] != 'i' || count[i] != 'o' || count[i] != 'u') {
            consonant++;
            count++;
        }
    }
    return consonant;
}