//A void* (void pointer) is a special "generic" pointer in C++ that can hold the memory address of any data type.  Unlike int* or double*, it does not know what type of data it is pointing to. 

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    double d = 3.14;
    char c = 'A';

    void *ptr = &i;
    void *ptr = &d;
    void *ptr = &c;


    //The Limitation: You Cannot Dereference Directly, we can't derefence a void pointer directly because it doesn't know the type of data it points to. To dereference a void pointer, we need to cast it to the appropriate type first.


    int num = 42;
    void* vPtr = &num;


    int *iPtr = static_cast<int*>(vPtr); // Cast void pointer to int pointer
    cout << "Value of num: " << *iPtr << endl; // Dereference the int pointer to get the value

    //let's do it one line

    cout << "Value of num (one line): " << *static_cast<int*>(vPtr) << endl; // Cast and dereference in one line



}