#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    long long number[N + 1];

    number[0] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> number[i];
        number[i] += number[i - 1];
    }

    for (int i = 1; i <= Q; i++) {
        int l, r;
        long long sum = 0;
        cin >> l >> r;

        sum = number[r] - number[l - 1];

        cout << sum << "\n";
        sum = 0;
    }

    return 0;
}