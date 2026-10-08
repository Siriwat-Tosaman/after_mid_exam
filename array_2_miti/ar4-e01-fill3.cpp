#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fill(arr + 2, arr + 5, 0);

    printArr(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}