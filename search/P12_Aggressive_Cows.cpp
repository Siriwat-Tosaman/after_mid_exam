#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int a[100000];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a, a + N);

    int low = 1;
    int high = a[N - 1] - a[0];
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int cows = 1;
        int last = a[0];

        for (int i = 1; i < N; i++) {
            if (a[i] - last >= mid) {
                cows++;
                last = a[i];
            }

            if (cows >= K) {
                break;
            }
        }

        if (cows >= K) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}