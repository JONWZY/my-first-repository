//laboratory access control problem

#include <iostream>

int main()
{
   
    bool status,career;
    float GPA;
    
    
    std::cout<<"--Laboratory access-- "<<std::endl;
    std::cout<<"You are an active student? press 1 of yes or 0 if no"<<std::endl;
    
    std::cin>>status;
    if (status==true)
    {
    std::cout<<"You are a student of Intelling Computing Engineering press 1 of yes or 0 if no"<<std::endl;
    std::cin>>career;
    
        if(career==true)
        {
            std::cout<<"You have access!!"<<std::endl;
            
        }
        else
        {
             std::cout<<"What is your GPA? "<<std::endl;
             std::cin>>GPA;
             
             if(GPA>=9)
             {
                 std::cout<<"You have access!!"<<std::endl;
                 
             }
             else
             {
                 std::cout<<"Your cannot access to a laboratory";
                 
             }
        }
        
    }
    else
    {
        std::cout<<"Your cannot access to a laboratory";
    }
    
  
    return 0;
}