/******************************************************************************


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
    
    
    void deposit(double amount, std::string enteredPassword)
    {
         if(password==enteredPassword)
        {
           if(amount>0)
           {
                balance=balance+amount;
                std::cout<<"deposit succeful";
                
               
           } 
            
            else
            {
                std::cout<<"cannot deposit negative numbers"<<std::endl;
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

void imprimirmenu()
{
    
    std::cout << "\n***********************************" << std::endl;
    std::cout << "*       TRANSACTION MENU          *" << std::endl;
    std::cout << "***********************************" << std::endl;
    std::cout << "* 1. Deposit money                *" << std::endl;
    std::cout << "* 2. Withdraw money               *" << std::endl;
    std::cout << "* 3. Check balance                *" << std::endl;
    std::cout << "* 4. Exit                         *" << std::endl;
    std::cout << "***********************************" << std::endl;
    std::cout << "Select an option (1-4): ";
 
    
}
void depositmenu()
{
    std::cout << "\n***********************************" << std::endl;
    std::cout << "*          DEPOSIT MONEY          *" << std::endl;
    std::cout << "***********************************" << std::endl;
    std::cout << "Enter your password: ";
}

void withdrawmenu()
{
    std::cout << "\n***********************************" << std::endl;
    std::cout << "*         WITHDRAW MONEY          *" << std::endl;
    std::cout << "***********************************" << std::endl;
    std::cout << "Enter your password: ";
}

void balancemenu()
{
    std::cout << "\n***********************************" << std::endl;
    std::cout << "*          CHECK BALANCE          *" << std::endl;
    std::cout << "***********************************" << std::endl;
    std::cout << "Enter your password: ";
}



int main()
{
    
    std::string password;
    double amount;
    int option;
    BankAccount account1("Contraseña",1000.0);
    
    
    do {
        
        imprimirmenu();
        std::cin >> option;
        
        switch(option)
        {
            case 1:
            depositmenu();
            
            std::cin>>password;
            std::cout<<"Enter the amount to deposit: $";
            std::cin>>amount;
            account1.deposit(amount,password);
            std::cout<<"\n";
            break;
            
            case 2:
            withdrawmenu();
            std::cin>>password;
            std::cout<<"Enter the amount to withdraw: $";
            std::cin>>amount;
            account1.withdraw(amount,password);
            std::cout<<"\n";
             
            break;
            
            case 3:
            balancemenu();
            std::cin>>password;
            std::cout<<account1.getbalance(password)<<std::endl;
            

            break;
            
            case 4:
            
            break;
            
            default:
            std::cout << "\nInvalid option. Please try again." << std::endl;
            break;
            
            
            
            
            
            
        }
    
    } while (option != 4);
    




    return 0;
}