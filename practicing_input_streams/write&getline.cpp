#include <iostream>
#include <string> //getline is includes in the library although most compiler attach string library by default to iostream library
#include <unistd.h> //this help us to use => write function 
using namespace std;

int main() {

    int n;
    cin >> n;

    cin.ignore();

    // write(1, "Hello World\n", 12); //write function is used to write to the screen   // 1 is the file descriptor for the standard output
    // 12 is the length of the string to be written

    //normally file descriptor 1 is used for standard output, 0 is used for standard input and 2 is used for standard error

    
    string s;
    cout << "provide your input " << endl;
    getline(cin, s); //getline format works like this  => getline(cin, variable name)

    cout << "This is your output " << s;
}