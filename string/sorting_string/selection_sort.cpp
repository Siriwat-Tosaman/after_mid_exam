#include <iostream>
#include <string>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int min_idx;

    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int arr[] = {64, 32, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Bubble sort with function." << endl;
    cout << "unsorted array" << endl;
    printArr(arr, n);

    selectionSort(arr, n);

    cout << "sorted array" << endl;
    printArr(arr, n);

    return 0;
}