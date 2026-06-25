/******************************************************************************
Make sure the attributes in  BankAccount( balanceand password) are changed from  private to  
protected so the child class can access them.

Add  virtualto the  BankAccountdestroyer.

Create the child class SavingsAccount : public BankAccount.

Add to private attribute  double interestRate;to the child.

Write the child constructor using a member initialization list to pass variables up 
to the parent constructor.

Implement the  applyInterest()function inside  SavingsAccountto update the balance 
(balance = balance + (balance * interestRate);).
*******************************************************************************/


#include <iostream>
#include <string>

class BankAccount{
    
    protected:
    
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
    
    
    
    public:
    virtual ~BankAccount(){
        std::cout<< "Parent BankAccount destroyed";
    }
    
    
};


class SavingsAccount : public BankAccount
{
    
    private:
    double interestRate;
    
    public:
    
    SavingsAccount(std::string userpassword,double startbalance,double interest)
    :BankAccount(userpassword,startbalance){
      
      
      
         if(interest>=0)
        {
            interestRate=interest;
        }
        else{
        interestRate=0;
        }
        
        
    }
    
    void applyInterest(std::string enteredPassword)
    {
        if(enteredPassword==password){
        
        balance=balance+(balance*interestRate);
        
        std::cout<<"You new balance after interest is: "<<balance<<std::endl;
        }
        else
        {
            std::cout<<"wrong_password";
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
    
    SavingsAccount account2("Contraseña",1000.0,0.05);
    account2.applyInterest("Contraseña");
    


    return 0;
}

