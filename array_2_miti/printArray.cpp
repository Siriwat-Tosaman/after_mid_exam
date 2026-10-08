#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int arr[5] = {};

    printArr(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}