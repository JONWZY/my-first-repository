#include <iostream>
#include <string>

struct MachineNode {
    std::string name;
    MachineNode* next;
    MachineNode(std::string n) : name(n), next(nullptr) {}
};

class GymMachineList {
private:
    MachineNode* head;
public:
    GymMachineList() : head(nullptr) {}
    
    void insertMachine(std::string name) {
        MachineNode* newmachine = new MachineNode(name);
        if(head == nullptr){
            head = newmachine;
            return;
        }
        MachineNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newmachine;
    }
    
    void displayMachines() {
        MachineNode* temp = head;
        while(temp != nullptr) {
            std::cout << "[" << temp->name << "] -> ";
            temp = temp->next;
        }
        std::cout << "NULL\n";
    }
    
    bool searchMachine(std::string targetName) {
        MachineNode* temp = head;
        while(temp != nullptr) {
            if(temp->name == targetName) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

struct PlateNode {
    int weight;
    PlateNode* next;
    PlateNode(int w) : weight(w), next(nullptr) {}
};

class PlatesStack {
private:
    PlateNode* top;
public:
    PlatesStack() : top(nullptr) {}
    
    void push(int w) {
        PlateNode* newplate = new PlateNode(w);
        newplate->next = top;
        top = newplate;
        std::cout << "Push: +" << w << " kg loaded to the barbell.\n";
    }
    
    void pop() {
        if(top == nullptr) {
            std::cout << "Pop: No plates to remove.\n";
            return;
        }
        PlateNode* temp = top;
        std::cout << "Pop: -" << top->weight << " kg removed.\n";
        top = top->next;
        delete temp;
    }
    
    void peek() {
        if(top != nullptr)
            std::cout << "Top of the barbell: " << top->weight << " kg\n";
        else
            std::cout << "The barbell is empty.\n";
    }
};

struct ClientNode {
    std::string name;
    ClientNode* next;
    ClientNode(std::string n) : name(n), next(nullptr) {}
};

class ClientQueue {
private:
    ClientNode* front;
    ClientNode* tail;
public:
    ClientQueue() : front(nullptr), tail(nullptr) {}
    
    void enqueue(std::string name) {
        ClientNode* newNode = new ClientNode(name);
        if(front == nullptr) {
            front = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        std::cout << "Enqueue: " << name << " joined the line.\n";
    }
    
    void dequeue() {
        if(front == nullptr) {
            std::cout << "Queue is empty.\n";
            return;
        }
        ClientNode* temp = front;
        std::cout << "Dequeue: Serving " << front->name << "\n";
        front = front->next;
        if(front == nullptr) tail = nullptr;
        delete temp;
    }
    
    void getFront() {
        if(front != nullptr)
            std::cout << "Front of the queue: " << front->name << "\n";
        else
            std::cout << "The queue is empty.\n";
    }
    
    void getTail() {
        if(tail != nullptr)
            std::cout << "Tail of the queue: " << tail->name << "\n";
        else
            std::cout << "The queue is empty.\n";
    }
};

int main() {
    std::cout << "=== SMART GYM MANAGEMENT SYSTEM ===\n\n";
    
    std::cout << "--- 1. Machine Management ---\n";
    GymMachineList gymmachines;
    gymmachines.insertMachine("Leg Press");
    gymmachines.insertMachine("Hack Squat");
    gymmachines.displayMachines();
    std::string searchTarget = "Hack Squat";
    if (gymmachines.searchMachine(searchTarget)) {
        std::cout << "The machine [" << searchTarget << "] is AVAILABLE.\n\n";
    } else {
        std::cout << "The machine [" << searchTarget << "] is not found.\n\n";
    }
    
    std::cout << "--- 2. Olympic Barbell (Stack) ---\n";
    PlatesStack plates;
    plates.push(20);
    plates.push(15);
    plates.peek();
    plates.pop();
    plates.peek();
    std::cout << "\n";
    
    std::cout << "--- 3. Reception (Queue) ---\n";
    ClientQueue clients;
    clients.enqueue("Juan");
    clients.enqueue("Pablo");
    clients.enqueue("Jonathan");
    clients.getFront();
    clients.getTail();
    clients.dequeue();
    clients.getFront();
    
    return 0;
}
