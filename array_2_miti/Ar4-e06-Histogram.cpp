#include <iostream>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {2, 5, 2, 3, 5, 2, 4};
    int ind[] = {0, 1, 2, 3, 4, 5, 6};
    int n = 7;

    int freq[10] = {0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    cout << "Array of data : " << endl;
    printArr(a, n);

    cout << endl << "Frequency of data : " << endl;
    printArr(ind, n);
    cout << endl;
    printArr(freq, n);

    return 0;
}