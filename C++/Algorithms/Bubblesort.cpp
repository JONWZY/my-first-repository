#include <iostream>
#include <vector>
#include <string>

template <typename T>
void swapValues(T &a, T &b) {
    T temporal = a;
    a = b;
    b = temporal;
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] < arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    
    std::vector<int> weights = {45, 10, 35, 25, 5};

    std::cout << "Before: ";
    for(int w : weights) std::cout << w << "kg ";
    std::cout << "\n";

    
    bubbleSort(weights);

    std::cout << "After sorting (Bubble Sort): ";
    for(int w : weights) std::cout << w << "kg ";
    std::cout << "\n";

    return 0;
}