/******************************************************************************
A Template is a blueprint for a function or a class. Instead of specifying a hardcoded d
ata type like int or double, you use a placeholder (usually represented by the letter T).

When you call the function, the C++ compiler automatically generates the exact version 
the function you need behind the scenes.


Write a program that contains a template function named swapValues.

The function should take two parameters by reference (using the & operator you learned in Phase 2) so it can modify 
the original values directly.

Inside the function, write the logic to switch their values. (Hint: You will need a temporary variable T temp = a; 
to hold a value while you swap).

In main(), test your function twice:

First, swap two integers (e.g., int x = 10, y = 20;).

Second, swap two text strings (e.g., std::string s1 = "Gym", s2 = "Code";).

Print the values before and after the swap to verify it works perfectly for both data types.
*******************************************************************************/

#include <iostream>
#include <string>


template <typename T>
void swapValues(T &a, T &b)
{
    T temporal=a;
    
    a=b;
    b=temporal;
    
    
    
}

    



int main()
{
 
 double y=10.4;
 double x=9.5;

 swapValues(x,y);

 std::cout <<"X:"<< x  << " Y: "<< y<< std::endl;
 
 std::string s1="Gym", s2= "Code";
 
 swapValues(s1,s2);
 
 std::cout<<"s1: "<< s1<<" s2: "<<s2<<std::endl;
 
 
    return 0;
}