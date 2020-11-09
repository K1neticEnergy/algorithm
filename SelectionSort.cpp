#include <iostream>

void SelectionSort(int *arr, int size){
    for (int i = 0; i < size - 1; i++){
        int kMin = i;
        int eMin = arr[i];
        for (int j = i; j < size; j++) 
            if (arr[j] < eMin){
                eMin = arr[j];
                kMin = j;
            }
        std::swap(arr[i], arr[kMin]);
    }
}

int main() {
    int size = 9;
    int *array = new int[size] {10,60,20,34,57,11,25,6,44};
    SelectionSort(array, size);
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    delete [] array;
    return 0;
}