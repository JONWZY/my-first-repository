/******************************************************************************
Create a template class called Pair. This class will store exactly two items of 
the same generic data type.

Add two private attributes of type T: first and second.

Write a public constructor that uses a member initialization list to 
initialize both values.

Write a public method called displayValues() that simply prints both 
items to the screen.

Write a public method called getMaxValue() that uses a conditional check
to return whichever of the two items is larger.

In main(), instantiate two instances of your Pair class:

One using integers to compare weights (e.g., 80 and 95).

One using doubles to compare precision values (e.g., 45.2 and 45.8).

Run both methods for each instance.
*******************************************************************************/

#include <iostream>
#include <string>


template<typename T>
class Pair
{
  private:
  
  T first;
  T second;
  
  public:
  Pair(T fir,T sec ) : first(fir),second(sec){}
  
  void displayValues()
  {
      
      std::cout<<"First value: "<<first<<" Second value: "<<second<<std::endl;
      
      
      
  }
  
  T getMaxValue()
  {
      
    return (first>second) ? first : second;
      
  }
    
    
};

    



int main()
{
 
    Pair<int> weights(80,95);
    
    weights.displayValues();
    
    std::cout<<"Your max value is: "<<weights.getMaxValue()<<std::endl;
    
    Pair<double>precision(45.2,45.8);
    
    precision.displayValues();
    
    std::cout<<"Your max value is: "<<precision.getMaxValue()<<std::endl;

 
    return 0;
}