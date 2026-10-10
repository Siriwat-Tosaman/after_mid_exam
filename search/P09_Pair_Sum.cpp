#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int number[n];
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    sort(number, number + n);

    int l = 0, r = n - 1;

    while (l < r) {
        long long sum = number[l] + number[r];

        if (sum == x) {
            cout << "YES";
            return 0;
        }
        else if (sum < x) {
            l++;
        }
        else {
            r--;
        }
    }
    cout << "NO";

    return 0;
}