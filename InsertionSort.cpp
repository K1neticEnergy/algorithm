#include <iostream>
void InsertionSort(int *arr, int size){
    int tmp;
    for (int i = 1; i < size; i++) {
        tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && tmp < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
    }
}

int main(){
    int size = 15;
    int *array = new int[size] {20, 68, 4, 7, 164, 15, 32, 525, 56, 70, 6, 90, 5, 123, 40};
    InsertionSort(array, size);
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    delete [] array;
    return 0;
}