/* 
 * File:   main.cpp
 * Author: Leslie
 *
 * Created on May 2, 2016, 11:47 AM
 */

#include <cstdlib>
#include <iostream>


using namespace std;


template <class T>

T Maximum (T num1, T num2)
{
    int num3;
    int max;
    max=num3;
    
    if (num1>max)    
        max=num1;   
    if (num2>max)
        max=num2;
    
    return max;
}

int main(int argc, char** argv) {

    int num1;
    int num2;
    cout << "Enter first number " << endl;
    cin >> num1 >> num2;
    
    cout << Maximum (num1, num2);
    
    return 0;
}

