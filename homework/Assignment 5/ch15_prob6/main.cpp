/* 
 * File:   main.cpp
 * Author: Ariana & Gilbert
 *
 * Created on May 31, 2016, 1:25 AM
 */

#include <cstdlib>
#include <iostream>
#include "Essay.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int gram;
    int spell;
    int len;
    int con;
    cout << "Enter grammer score " << endl;
    cin >> gram;
    cout << "Enter spelling score " << endl;
    cin >> spell;
    cout << "Enter score for length " << endl;
    cin >> len;
    cout << "Enter score based on content " << endl;
    cin >> con;
    Essay grade(gram, spell, len, con);
    cout << "The final score on the essay is " << grade.getScore() << endl;
    
    return 0;
}

