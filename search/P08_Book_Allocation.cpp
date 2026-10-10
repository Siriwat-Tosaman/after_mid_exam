#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int number[n];
    long long l = 0, r = 0;

    for (int i = 0; i < n; i++) {
        cin >> number[i];
        if (number[i] > l) {
            l = number[i];
        }
        r += number[i];
    }
    long long ans = r;

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        int people = 1;
        long long page = 0;
        for (int i = 0; i < n; i++) {
            if (page + number[i] > mid) {
                people++;
                page = number[i];
            }
            else {
                page += number[i];
            }
        }
        if (people <= k) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans;
    
    return 0;
}