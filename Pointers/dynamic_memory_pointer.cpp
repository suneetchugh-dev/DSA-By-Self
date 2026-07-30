//Pointer are required to manage memory manually on the heap using new and delete 
//ths allows creating variables whose size or lifetime is determined at runtime

int *dynamicVar = new int;
// new int; This command goes to a different area of memory called the Heap. It asks the operating system: "Give me enough raw space to store one integer." The OS finds a free spot, reserves it, and returns the memory address of that spot.

*dynamicVar = 100;

delete dynamicVar; //freeing memory to prevent leaks

dynamicVar = nullptr; //setting pointer to nullptr after deletion , it's a good practice;


//also it is necessary for a pointer to be intialised since if you try to dereference it, it will provide you up with garbage value right?, always initialise it with nullptr or with some memory address of a variable

//Good Practice => Null Check	=> if (ptr != nullptr)	Checks if the pointer is valid before use.

