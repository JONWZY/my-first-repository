/******************************************************************************
Create the BankAccount class with private attributes for balance and password.

Write a public Constructor that sets the initial password and sets the starting balance to 0.0.

Implement the public withdraw(double amount, std::string enteredPassword) function with 
the two security checks we discussed. Print an error message if the password is wrong or if there isn't enough money.

Test it in main() by creating an account, trying to withdraw money 
with a wrong password, and then trying with the correct password.

*******************************************************************************/

#include <iostream>
#include <string>

class BankAccount{
    
    private:
    
    std::string password;
    double balance;
    
    public:
    
    BankAccount(std::string userpassword,double startbalance)
    {
        
        password=userpassword;
        if(startbalance>=0)
        {
            balance=startbalance;
        }
        else{
        balance=0;
        }
        
    }
    
    void withdraw(double amount, std::string enteredPassword)
    {
        if(password==enteredPassword)
        {
           if(amount<=balance)
           {
                balance=balance-amount;
                std::cout<<"Withraw succeful";
                
               
           } 
            
            else
            {
                std::cout<<"amount bigger than your balance"<<std::endl;
            }
            
        }
        else
        {
            std::cout<<"password wrong"<<std::endl;
            
        }
        
        
    }
    
    
    double getbalance(std::string enteredPassword)
    {
        
        if(enteredPassword==password)
        {
            std::cout<<"correct password "<<std::endl;
            std::cout<<"your balance is: ";
            
            return balance;
             
        }
        else
        {
            std::cout<<"wrong password";
            return -1.0;
        }
        
        
    }
    
    
    
    
    
    
};




int main()
{
    BankAccount account1("Contraseña",1000.0);
    
    account1.withdraw(20.0,"wrong_password");
    
    
    account1.withdraw(500,"Contraseña");
    std::cout<<""<<std::endl;
    std::cout<<account1.getbalance("Contraseña")<<std::endl;
    std::cout<<""<<std::endl;
    account1.withdraw(2000,"Contraseña");
    



    return 0;
}