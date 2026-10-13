#include <bits/stdc++.h>
using namespace std;

int checkRange(vector<int> &vc, int l, int r) {
    int lb = lower_bound(vc.begin(), vc.end(), l) - vc.begin();
    int ub = upper_bound(vc.begin(), vc.end(), r) -vc.begin();

    return ub - lb;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> price;
    price.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    sort(price.begin(), price.end());

    while (q--) {
        int l, r;
        cin >> l >> r;

        int count = checkRange(price, l, r);
        cout << count << endl;
    }

    return 0;
}