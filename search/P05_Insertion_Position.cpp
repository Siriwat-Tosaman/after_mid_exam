#include <iostream>
#include <algorithm>
using namespace std;

int lowestPosition(int a[], int n, int target) {
    int lb = lower_bound(a, a + n, target) - a;

    return lb;
}

int main() {
    int n, q;
    cin >> n >> q;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    //sort(num, num + n);

    for (int i = 1; i <= q; i++) {
        int target;
        cin >> target;
        int position = lowestPosition(num, n, target);
        cout << position << endl;
    }

    return 0;
}