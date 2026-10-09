#include <iostream>
#include <string>
using namespace std;

void printArr(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}



int main() {
    int n;
    cin >> n;
    float arr[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);
    printArr(arr, n);

    return 0;
}