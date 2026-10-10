#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int position = -1;

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        if (x == num[i]) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}