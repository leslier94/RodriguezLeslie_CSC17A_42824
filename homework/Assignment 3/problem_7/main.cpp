/*
 * File:   main.cpp
 * Author: Leslie Rodriguez
 *
 * Created on April 4, 2016, 11:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

/*
 *
 */

int main(int argc, char** argv) {
    const int SIZE = 100;
    char fileName1[SIZE];
    char fileName2[SIZE];
    char ch, ch2;
    ifstream inFile;
    ofstream outFile("file2.txt");
    cout << "Enter two file names " << endl;
    cin >> fileName1;
    cin >> fileName2;
    inFile.open(fileName1);
    while (!inFile.eof()) {
        inFile.get(ch);
        ch2 = toupper(ch);
        outFile.put((ch2));
        while (!inFile.eof()) {
            inFile.get(ch);
            ch2 = tolower(ch);
            outFile.put((ch2));
            if (ch2 == '.') {
                inFile.get(ch);
                ch2 = toupper(ch);
                outFile.put((ch2));
            }
        }
    }
    inFile.close();
    outFile.close();
    cout << endl;
    return 0;
}