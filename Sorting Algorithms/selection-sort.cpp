// Selection Sort

#include <iostream>
using namespace std;

void selectionSortAscending(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        int minIdx = i;

        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
}

void selectionSortDescending(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        int maxIdx = i;

        for(int j=i+1; j<size; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }

        swap(arr[i], arr[maxIdx]);
    }
}

int main() {
    int arr[] = {6, 3, 8, 2, 7, 1, 5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSortAscending(arr, size);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    selectionSortDescending(arr, size);
    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}