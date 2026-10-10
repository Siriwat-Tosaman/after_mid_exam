#include <bits/stdc++.h>
using namespace std;

int uppestPosition(int a[], int n, int l, int r) {
    int lb = lower_bound(a, a + n, l) - a;
    int ub = upper_bound(a, a + n, r) - a;

    return ub - lb;
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
        int l, r;
        cin >> l >> r;
        int many_people = uppestPosition(num, n, l, r);
        cout << many_people << endl;
    }

    return 0;
}