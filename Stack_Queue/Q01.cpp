#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<int> q;

    while (Q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "PUSH") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (cmd == "POP") {
            if (!q.empty()) {
                q.pop();
            }
        }
        else if (cmd == "FRONT") {
            if (q.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << q.front() << endl;
            }
        }
        else if (cmd == "BACK") {
            if (q.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << q.back() << endl;
            }
        }
        else if (cmd == "SIZE") {
            cout << q.size() << endl;
        }
        else if (cmd == "EMPTY") {
            if (q.empty()) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}