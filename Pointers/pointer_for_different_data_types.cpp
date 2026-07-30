#include <iostream>
using namespace std;

int main() {

    // double pointer for floating digits
    double *price = new double;
    *price = 19.99;
    delete price;
    price = nullptr;

    // for characters
    char *grade = new char;
    *grade = 'A';
    delete grade;

    // for true and false
    bool *isActive = new bool;
    *isActive = true;
    delete isActive;

    class Player {
      public:
        std::string name = "Hero";
    };

    // Allocate memory for a Player object
    Player *playerPtr = new Player;
    playerPtr->name = "Link"; // Use -> to access members of a pointer
    cout << playerPtr->name;
    delete playerPtr;
}