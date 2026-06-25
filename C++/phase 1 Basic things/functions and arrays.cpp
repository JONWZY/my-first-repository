/*
Create an array inside main() that holds 4 gym weights (decimals, e.g., 45.5, 20.4, 10.0, 5.5).

Create a function named getHeaviestWeight above main(). This function should receive the array as a 
parameter and use a loop to find and return the highest weight in that array.

Call the function inside main() and print the heaviest weight.
*/
#include <iostream>

double getHeaviestWeight(double gymweights[4])
{
    double max=gymweights[0];
    int i= 0;
    for(i=0; i<=3;i++){
        
    if(max<gymweights[i])
    {
        max=gymweights[i];
        
    }
    }
    
    return max;
}



int main()
{
    int i;
    double gymweights[4];
    
    for(i=0;i<=3;i++)
    {
        std::cout <<"What is gymweights" << std::endl;
        std::cin>>gymweights[i];
        
    }
   double numbermax=getHeaviestWeight(gymweights);
   
   std::cout<<numbermax<<std::endl;
   
  
    return 0;
}