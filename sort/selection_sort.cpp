#include<iostream>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[m]) {
                m = j;
            }
        }
        std::swap(arr[m], arr[i]);
    }
}

int main(){
    int arr[] = {90, 60, 50, 110, 100, 20, 80, 30, 130, 170};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, arr_size);
    for (int i=0; i<arr_size; i++) std::cout<<arr[i]<<" ";

    std::cin.get();
    return 0;
}

//  O(n^2) O(1)