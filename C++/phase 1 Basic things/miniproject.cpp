/*
Create a main() function that stores an array of 5 weights representing your bench press personal records (PRs) over the last 5 weeks.

Let the user type in those 5 progress weights.

Create two functions (Type 4: Inputs and Outputs):

double calculateAverageProgress(...): Calculates and returns the mathematical average of your lifts.

double getProgressSpike(...): Finds the difference between your lowest lift and your highest lift to see how much strength you gained total.

Print a beautiful summary report displaying your starting weight, your max weight, your average, and your total strength gain.
*/

#include <iostream>

double calculateAverageProgress(double PRs[],int prsnumber)
{
    double average=0;
    int i;
    for(i=0;i<prsnumber;i++)
    {
        average=average+PRs[i];
        
    }
    average=average/5;
    
    return average;
}


double getProgressSpike(double PRs[],int prsnumber)
{
    int i;
    double max=PRs[0],low=PRs[0],difference;
    //find max number 
    for(i=0;i<prsnumber;i++)
    {
        if(max<PRs[i])
        {
            max=PRs[i];
            
        }
        
    }
    
     //find Low number 
    for(i=0;i<prsnumber;i++)
    {
        if(low>PRs[i])
        {
            low=PRs[i];
            
        }
        
    }
    
    difference=max-low;
    
    
    std::cout<<"Starting Weight (Low):"<<low<<std::endl; 
    std::cout<<"Peak Weight (Max):"<<max<<std::endl; 
    std::cout<<"Total Strength Gained:"<<difference<<"kg "<<std::endl; 


    
    return 0;
    
}








int main()
{
    const int prsnumber = 5;
    int i;
    double PRs[prsnumber];
    
    std::cout <<"=== Gym Progress Tracker ===\n"<< std::endl;
    for(i=0;i<prsnumber;i++)
    {
        std::cout<<"Enter Bench Press PR for Week"<<i+1<<std::endl;
        std::cin>>PRs[i];
        
    }

    double average=calculateAverageProgress(PRs,prsnumber);
    getProgressSpike(PRs,prsnumber);
    
    
    
    std::cout<<"Your average weights is:" <<average<<std::endl;
  
    
    
    return 0;