#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int number[n];
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    sort(number, number + n);

    int ans = INT_MAX;

    for (int i = 1; i < n; i++) {
        int ref = number[i] - number[i - 1];

        if (ref < ans) {
            ans = ref;
        }
    }
    cout << ans;
    
    return 0;
}