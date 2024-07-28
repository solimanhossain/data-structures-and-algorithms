#include<iostream>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int arr[] = {9, 6, 5, 11, 10, 2, 8, 3, 13, 17};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, arr_size);
    for (int i=0; i<arr_size; i++) std::cout<<arr[i]<<" ";

    std::cin.get();
    return 0;
}

//  O(n^2) O(1)