#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    stack<int> fire;
    int incoming = 1;
    bool mission = true;

    for (int i = 0; i < n; i++) {
        int target;
        cin >> target;

        while (incoming <= n && (fire.empty() || fire.top() != target)) {
            fire.push(incoming);
            incoming++;
        }

        if (!fire.empty() && fire.top() == target) {
            fire.pop();
        } else {
            mission = false;
        }
    }
    if (mission) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}