

#include <iostream>
#include<string>

struct Node
{
    
    int data;
    Node* next;
    
    Node(int val):data(val), next (nullptr){}
    
};



int main()
{
    Node* nodeA=new Node(10);
    Node* nodeB=new Node(20);
    Node* nodeC=new Node(30);
    
    nodeA->next=nodeB;
    nodeB->next=nodeC;
    
    nodeA->next=nodeC;
    delete nodeB;

    
    Node* temp=nodeA;
    
    while(temp!=nullptr)
    {
        
        std::cout<<"["<<temp->data<<"]->";
        temp=temp->next;
        
    }
    
    std::cout<<"Null\n";
    
    delete nodeA;
    delete nodeC;
    
    
    
    
    
    
    

}