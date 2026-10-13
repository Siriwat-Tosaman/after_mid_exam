#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    stack<int> s;
    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "PUSH") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (cmd == "POP") {
            if (!s.empty()) {
                s.pop();
            }
        }
        else if (cmd == "TOP") {
            if (s.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << s.top() << endl;
            }
        }
        else if (cmd == "SIZE") {
            cout << s.size() << endl;
        }
        else if (cmd == "EMPTY") {
            if (s.empty()) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}