#include <iostream>
#include <algorithm>
using namespace std;

int countNumber(int a[], int n, int target) {
    int lb = lower_bound(a, a + n, target) - a;
    int ub = upper_bound(a, a + n, target) - a;

    int count = ub - lb;

    return count;
}

int main() {
    int n, q;
    cin >> n >> q;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num, num + n);

    for (int i = 1; i <= q; i++) {
        int target;
        cin >> target;
        int count = countNumber(num, n, target);
        cout << count << endl;
    }

    return 0;
}