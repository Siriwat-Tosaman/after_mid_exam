#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[n] = {};

    fill(arr/*จุดเริ่มต้น*/, arr + n/*จุดสิ้นสุด*/, 8/*จัเปลี่ยนไปเป็นเลข*/);
    //

    printArr(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}