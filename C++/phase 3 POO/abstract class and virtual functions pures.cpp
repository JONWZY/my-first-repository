/******************************************************************************
Create a base Parent class called Character. It should have a protected 
attribute std::string name and a public constructor.

Inside Character, create a virtual void attack() function that prints: 
"[Name] launches a basic physical strike!".

Create a Child class called Warrior that inherits from Character. 
Override the attack() function to print: "⚔️ [Name] 
swings a massive sword causing critical damage!".

Create another Child class called Mage that inherits from Character. 
Override the attack() function to print: "🔮 [Name] 
casts a powerful fireball spell!".

In main(), allocate a Warrior and a Mage dynamically on the Heap using 
Parent pointers (Character*), call their attack() 
functions, and safely delete them.
*******************************************************************************/

#include <iostream>
#include <string>


class Character
{
  protected:
  
  std::string name;
  
  
  public:
  Character(std::string namer)
  {
      
      name=namer;
  }
  
  virtual ~Character()
  {
      std::cout<<" Delate succesfuly"<<std::endl;
  }
  
  virtual void attack() = 0;
 
    
};




class Warrior: public Character
{
    
    
   public:
   Warrior(std::string namer):Character(namer){}
  
    
    void attack() override
    {
        std::cout<<name<<" swings a massive sword causing critical damage!"<<std::endl;
    }
    
    
    
    
};

class Mage: public Character
{
    
    
    
    public:
    Mage(std::string namer):Character(namer){}
  
    
    void attack() override
    {
        std::cout<<name<<" casts a powerful fireball spell!"<<std::endl;
    }
    
    
    
    
};



int main()
{
    const int Party_size = 2;
    Character* maincharacter[Party_size];
    
    
    maincharacter[0]=new Warrior("Alfonso");
    maincharacter[1]=new Mage ("Axel");
    
    std::cout <<"===Executing ataccks==="  << std::endl;
    
    for(int i=0;i<Party_size;i++)
    {
        maincharacter[i]->attack();
        
        
    }
    
    
    std::cout<<"\n=== Cleaning up memory ==="<<std::endl;
    
    for(int i=0;i<Party_size;i++)
    {
      delete maincharacter[i];
        
        
    }
  

    return 0;
}