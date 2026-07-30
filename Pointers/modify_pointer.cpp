#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    int *ptr = &number;

    cout << "Original Value of Number " << number << endl;
    
    //changing the value of number using ptr
    *ptr = 20;
    
    cout << "Printing Modified Value of Number " << number;

    
}