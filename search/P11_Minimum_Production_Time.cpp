#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;

    long long a[100000];
    long long mn = 1000000000;

    for (int i = 0; i < N; i++) {
        cin >> a[i];

        if (a[i] < mn) {
            mn = a[i];
        }
    }

    long long low = 0;
    long long high = mn * M;

    while (low < high) {
        long long mid = low + (high - low) / 2;
        long long total = 0;

        for (int i = 0; i < N; i++) {
            total += mid / a[i];

            if (total >= M) {
                break;
            }
        }

        if (total >= M) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}