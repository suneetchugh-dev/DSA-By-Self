#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int *ptr;

    ptr = &x;


    cout << "Printing the address of ptr which is pointing to same address as of x " << ptr << endl;
    cout << "Printing the value of x using ptr pointer " << *ptr;
    return 0;
}