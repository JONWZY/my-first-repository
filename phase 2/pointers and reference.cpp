/*
Create a function named doubleWithPointer(int* ptr) that doubles the value using pointer syntax.

Create a function named doubleWithReference(int& ref) that doubles the value using reference syntax.

In main(), create a variable int myWeight = 50;. Call the first function to make it 100, and then call the second function to make it 200. Print the final result.
*/
#include <iostream>

void WithPointer(int* ptr)
{
    
    *ptr=*ptr + *ptr;
    
}

void WithReference(int& ref)
{
    
    ref= ref+ref;
}



int main() {
    
    int myWeight=50;
    
    WithPointer(&myWeight);
    
    std::cout << myWeight << std::endl;
    
    WithReference(myWeight);
    std::cout<<myWeight<<std::endl;
    
    return 0;
}