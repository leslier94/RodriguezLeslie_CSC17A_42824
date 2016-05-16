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
struct CompanyDivision {
    string division;
    int quarter1;
    int quarter2;
    int quarter3;
    int quarter4;
    int sales;
};

int main(int argc, char** argv) {
    CompanyDivision record;
    fstream data("Data.dat", ios::in | ios::binary);
    data.read(reinterpret_cast<char *> (&record), sizeof (record));
    while (!data.eof())
        cout << "Division ";
    cin >> record.division;
    cout << "Quarter 1";
    cin >> record.quarter1;
    cout << "Quarter 2";
    cin >> record.quarter2;
    cout << "Quarter 3";
    cin >> record.quarter3;