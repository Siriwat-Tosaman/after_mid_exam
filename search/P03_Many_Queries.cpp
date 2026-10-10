#include <iostream>
#include <algorithm>
using namespace std;

bool checkBinarySearch(int a[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            return true;
        }
        else if (a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int n, leng;
    cin >> n >> leng;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 1; i <= leng; i++) {
        int target;
        cin >> target;

        if (checkBinarySearch(a, n, target)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}