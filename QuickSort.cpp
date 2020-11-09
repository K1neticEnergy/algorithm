#include <iostream>

void QuickSort(int *arr, int left, int right){
    int l = left;
    int r = right - 1;
    int size = right - left;
    if (size > 1) {
        int pivot = arr[size / 2];
        while (l < r)
        {
            while (arr[r] > pivot) r--;
            while (arr[l] < pivot) l++;
            if (l < r) {
                std::swap(arr[l], arr[r]);
                l++;
            }     
        }
        QuickSort(arr, left, l);
        QuickSort(arr, r, right - 1);
    }
}

int main() {
    int size = 10;
    int *array = new int[size] {10,69,35,49,25,79,30,10,42,-5};
    QuickSort(array,0, size);
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    delete [] array;
}