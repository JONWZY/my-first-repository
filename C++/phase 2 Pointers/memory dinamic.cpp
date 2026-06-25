/*Write a program that asks an administrator how many weeks they have been tracking their bench press progress.

Read that number into a variable called weeks.

Dynamically allocate a double array on the Heap with that exact size.

Use a loop to let the user input their max lift for each week.

Calculate the average lift weight using a loop.

Crucial: Delete the array correctly from the Heap to ensure there are no memory leaks.

Print the calculated average. */

#include <iostream>

int main()
{
    
    int value,i;
    double average=0;
    
    std::cout << "===GYM TRACKER===" << std::endl;
    std::cout <<"how many weeks are you have been tracking your bench press?"<<std::endl;
    std::cin  >>value ;
    double* benchsprs = new double [value];
    for(i=0;i<value;i++)
    {
        std::cout<<"What is your max lift on week number:"<<i+1<<std::endl;
        std::cin>>benchsprs[i];
        
        
    }
    
    for(i=0;i<value;i++)
    {
        average=average+benchsprs[i];
        
    }
    average=average/value;
    
    
    std::cout << "Your average weight is: "<<average << std::endl;
    
    delete[] benchsprs;
    benchsprs=nullptr;
    
    return 0; 
}