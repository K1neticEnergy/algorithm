#include <iostream>
#define PI 3.14;

void BubbleSort(int *arr, int size);

int main() {
    int size = 6;
    int *array = new int[size] {6,8,4,2,1,5};
    BubbleSort(array,size);
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }

    delete [] array;
    return 0;
}

void BubbleSort(int *arr, int size) {
    for(int i = 1; i < size; i++) {
        for(int j = size - 1; j >= i; j--) 
            if (arr[j] < arr[j - 1]) std::swap(arr[j], arr[j -1]);
    }
}