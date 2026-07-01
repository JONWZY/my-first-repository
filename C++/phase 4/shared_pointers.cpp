

/******************************************************************************


*******************************************************************************/


#include<memory>
#include <iostream>
#include<string>

class GymMachine
{
  private:
  
  std::string name;
    
  public:
  
  GymMachine(const std::string nam) : name(nam){}
  
  void exercise(){
      
      
      std::cout<<"Training hard on the machine "<<name<<std::endl;
      
      
  }

    
};



int main()
{
std::shared_ptr<GymMachine> ptr1 = std::make_shared<GymMachine>("extension leg");    


std::shared_ptr<GymMachine> ptr2 = ptr1;    

ptr1->exercise();

ptr2->exercise();
    

    return 0;
}