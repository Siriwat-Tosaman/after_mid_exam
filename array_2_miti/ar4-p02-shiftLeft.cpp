#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void shiftLeft(int b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i] = b[i + 1];
    }
}

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    shiftLeft(arr, sizeof(arr)/sizeof(arr[0]));
    printArr(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}