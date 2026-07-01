

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
    std::unique_ptr<GymMachine>Mymachine=std::make_unique<GymMachine>("Bench press");
    
    Mymachine->exercise();
    
    

    return 0;
}