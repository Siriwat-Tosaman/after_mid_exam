#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int left = 0, right = n - 1;
    bool found = false;

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    while (left <= right) {
        int mid = (left + right) / 2;

        if (num[mid] == x) {
            found = true;
            break;
        }
        else if (num[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if (found) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}