#include iostream
#include vector

template typename T
void swapValues(T &a, T &b) {
    T temporal = a;
    a = b;
    b = temporal;
}

void selectionSort(stdvectorint& arr) {
    int n = arr.size();
    
    for (int i = 0; i  n - 1; i++) {
        int minIdx = i;
        
        for (int j = i + 1; j  n; j++) {
            if (arr[j]  arr[minIdx]) {
                minIdx = j;
            }
        }
        
        if (minIdx != i) {
            swapValues(arr[i], arr[minIdx]);
        }
    }
}

int main() {
    stdvectorint weights = {35, 10, 45, 5, 25};
    
    stdcout  Original ;
    for(int w  weights) stdcout  w  kg ;
    stdcout  n;
    
    selectionSort(weights);
    
    stdcout  Sorted by Selection ;
    for(int w  weights) stdcout  w  kg ;
    stdcout  n;
    
    return 0;
}
