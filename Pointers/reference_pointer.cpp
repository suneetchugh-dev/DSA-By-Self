//passing by reference => by default c++ passes the value as argument to functions by making a copy , pointer helps you to pass the memory address, enabling the function to modify the original value

#include <iostream>
using namespace std;


void doubleValue(int *val)
{
    *val = *val*2;
}

int main()
{
    int x = 5;
    cout << " value of x before modifying " << x << endl;

    doubleValue(&x);

    cout << "Value of x after modifying " << x << endl;

    return 0;
}