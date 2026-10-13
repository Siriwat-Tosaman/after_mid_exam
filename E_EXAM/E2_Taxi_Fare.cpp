#include <iostream>
using namespace std;

int main() {
    int q;
    long long d;
    cin >> q;

    for (int i = 1; i <= q; i++) {
        cin >> d;
        if (d <= 2) {
            cout << 35 << endl;
        }
        else if (d <= 10) {
            cout << 35 + (d  - 2) * 5 << endl;
        }
        else if (d > 10) {
            cout << 75 + (d - 10) * 3 << endl;
        }
    }

    return 0;
}