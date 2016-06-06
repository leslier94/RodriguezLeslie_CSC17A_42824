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
template <class T>
T Minimum (T num4, T num5)
{
    int num6;
    int min;
    min=num6;
    
    if (num4>min)    
        min=num4;   
    if (num5>min)
        min=num5;
    
    return min;
}
int main(int argc, char** argv) {

    int num1;
    int num2;
    cout << "Enter number " << endl;
    cin >> num1 >> num2;
    
    cout << Maximum (num1, num2);
    int num4;
    int num5;
    cout << "Enter number " << endl;
    cin >> num4 >> num5;
    
    cout << Minimum (num4, num5);
    return 0;
}