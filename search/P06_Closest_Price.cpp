#include <iostream>
#include <algorithm>
using namespace std;

int uppestPosition(int a[], int n, int target) {
    int ub = upper_bound(a, a + n, target) - a;

    return ub;
}

int main() {
    int n, q;
    cin >> n >> q;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num, num + n);
    /*for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;*/

    for (int i = 1; i <= q; i++) {
        int target;
        cin >> target;
        int position = uppestPosition(num, n, target);

        if (position == 0) {
            cout << "-1" << endl;
            continue;
        }
        cout << num[position - 1] << endl;
    }

    return 0;
}