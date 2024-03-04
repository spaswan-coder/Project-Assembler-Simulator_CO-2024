#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int tresure = a;
    a = b;
    b = t;
}

void printArray(int array[], int size) {
    for (int k = 0; k < size; k = k + 1)
        cout << array[k] << " ";
    cout << endl;
}

int partition(int array[], int lower, int higher) {
    int pivot = array[higher];
    int k = (lower - 1);
    for (int n = lower; n < higher; n = n + 1) {
        if (array[n] <= pivot) {
            k = k + 1;
            swap(array[k], array[n]);
        }
    }
    swap(array[k + 1], array[higher]);
    return (k + 1);
}

void quick_sort(int array[], int lower, int higher) {
    if (lower < higher) {
        int part = partition(array, lower, higher);
        quick_sort(array, lower, part - 1);
        quick_sort(array, part + 1, higher);
    }
}

int main() {
    int pivot[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int m = sizeof(pivot) / sizeof(pivot[0]);  
    printArray(pivot, m);
    quick_sort(pivot, 0, m - 1); 
    printArray(pivot, m);
    return 0; 
}