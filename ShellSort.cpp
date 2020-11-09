#include <iostream>

void ShellSort(int arr[], int size) {
    int key = size / 2;
    while (key != 0){
        for (int i = key; i < size; i++) {
            int tmp = arr[i];
            int j = i - key;
            while(j >= 0 && arr[j] > tmp) {
                arr[j + key] = arr[j];
                j -= key;
            }
            arr[j + key] = tmp;
        }
        key /= 2;
    }
}

int main() {
    int size = 12;
    int array[] = {16,4,6,58,25,46,79,15,34,16,100,32};
    ShellSort(array, size);
    for(int i = 0; i < size; i++) std::cout << array[i] << " "; 
    //delete [] array;
    return 0;
}