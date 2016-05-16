/*
 * File:   main.cpp
 * Author: Leslie Rodriguez
 *
 * Created on April 4, 2016, 11:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 *
 */
const int SIZE = 4;
struct CompanyDivision {
    string division;
    int quarter[SIZE];
    int sales;
};

int main(int argc, char** argv) {
    CompanyDivision record[SIZE];
    ofstream data;
    data.open("Data.dat", ios::binary);
    for (int i =0; i < SIZE; i++){
    cout << "Division ";
    cin >> record[i].division;

    for (int j=0;j<SIZE;j++){
    cout << "Quarter " << j+1 << endl;
    cin >> record[i].quarter[j];
    }
    }
    data.write(reinterpret_cast<char *> (&record), sizeof (record));
    data.close();
    return 0;
}