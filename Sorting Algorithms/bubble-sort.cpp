// Bubble Sort 

#include <iostream>
using namespace std;

void bubbleSortAscending(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        bool swapped = false;

        for (int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        bool swapped = false;

        for(int j=0; j<size-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {4, 6, 2, 5, 3, 7, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSortAscending(arr, size);

    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    bubbleSortDescending(arr, size);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}