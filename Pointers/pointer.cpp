#include <iostream>
using namespace std;


//intialising a pointer

//datatype *varname

int a = 20;
int *p1 = &a; //pointer p1 is pointing to the address of a
float *p2;
char *p3;


int main()
{
    cout << "The value of a is " << a << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The value of p1 is " << p1 << endl;
    cout << "The value of p1 is " << *p1 << endl;
}




