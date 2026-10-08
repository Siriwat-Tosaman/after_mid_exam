#include <iostream>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {4, 8, 7, 8, 9, 7, 8, 6, 7, 5};
    int ind[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;

    int freq[10] = {0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    cout << "Array of data : " << endl;
    printArr(a, n);

    cout << endl << "Frequency of data : " << endl;
    /*printArr(ind, n);
    cout << endl;
    printArr(freq, n);*/

    for (int i = 0; i < n; i++) {
        if (freq[i] == 0) {
            continue;
        }
        cout << "score " << i << " have frequency " << freq[i] << endl;
    }

    return 0;
}