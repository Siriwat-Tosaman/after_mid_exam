#include <bits/stdc++.h> 
using namespace std;

int main() {
    string current = "HOME";
    stack<string> backstack;
    stack<string> forwardstack;
    int Q;
    cin >> Q;
    string command;

    while (Q--) {
        cin >> command;
        string x;
        if (command == "VISIT") {
            cin >> x;
            backstack.push(current);
            current = x;
            if (!forwardstack.empty()) {
                while (!forwardstack.empty()) {
                    forwardstack.pop();
                }
            }
        }
        else if (command == "BACK") {
            if (!backstack.empty()) {
                forwardstack.push(current);
                current = backstack.top();
                backstack.pop();
            }
        }
        else if (command == "FORWARD") {
            if (!forwardstack.empty()) {
                backstack.push(current);
                current = forwardstack.top();
                forwardstack.pop();
            }
        }
        else if (command == "CURRENT") {
            cout << current << endl;
        }
    }

    return 0;
}