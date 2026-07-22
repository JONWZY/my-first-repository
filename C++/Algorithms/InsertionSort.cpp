#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> weights = {10, 5, 20, 2};
    insertionSort(weights);
    std::cout << "Sorted with Insertion Sort: ";
    for (int w : weights) {
        std::cout << w << "kg ";
    }
    std::cout << "\n";
    return 0;
}
