//System Libraries
#include <iostream>

using namespace std;


int doSomething(int *x, int *y);

int main()
{
int x;
int y;
cout << "Enter a number" << endl;
cin >> x;
cout << "Enter another number" << endl;
cin >> y;
cout << "The original values are x = " << x << " and y = " << y << endl;
doSomething(&x, &y);
cout << "The new values are x = " << x << " and y = " << y << endl;
return 0;
}

int doSomething(int *x, int *y)
{
int temp = *x;
*x = *y * 10;
*y = temp * 10;

return *x + *y;
}
