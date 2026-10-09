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

void insertionSort(int arr[], int n) {
    int key;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 32, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Bubble sort with function." << endl;
    cout << "unsorted array" << endl;
    printArr(arr, n);

    insertionSort(arr, n);

    cout << "sorted array" << endl;
    printArr(arr, n);

    return 0;
}