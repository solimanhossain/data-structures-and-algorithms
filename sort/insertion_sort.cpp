#include<iostream>

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size - 1; i++) {
        int key = arr[i];
        int j = i;
        while(j > 0 && arr[j-1] > key){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}

int main(){
    int arr[] = {9, 6, 5, 11, 10, 2, 8, 3, 13, 17};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, arr_size);
    for (int i=0; i<arr_size; i++) std::cout<<arr[i]<<" ";

    std::cin.get();
    return 0;
}

//  O(n^2) O(1)