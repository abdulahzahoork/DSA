// Create an array.


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Elements in array: ";
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// -----------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10] = {10, 20, 30, 40};

//     int n = 4;

//     arr[n] = 50;
//     n++;

//     cout << "Elements in array: ";
//     for (int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// --------------------------------------------------------------------------


// Insertion in Middle of array

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[10] = {10, 20, 30, 40, 50};
//     int n = 5;

//     // insert 25 at index 2
//     int pos = 2;
//     for (int i=n; i>pos; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[pos] = 25;
//     n++;

//     cout << "Elements in array: ";
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// ----------------------------------------------------


// Deletion from the middle of array

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 25, 30, 40, 50};

    // Delete 25 from arr.

    int pos = 2;
    int n=6;

    for(int i=pos; i<n; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    cout << "Elements in array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}