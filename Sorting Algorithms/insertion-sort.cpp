// insertion sort

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        int key = arr[i];
        int j=i-1;
        
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {7, 3, 8, 2, 6, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}