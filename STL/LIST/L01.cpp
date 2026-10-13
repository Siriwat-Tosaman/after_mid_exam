#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    list<int> number;

    string command;
    while(q--) {
        int x;
        cin >> command;
        if (command == "PF") {
            cin >> x;
            number.push_front(x);
        }
        else if (command == "PB") {
            cin >> x;
            number.push_back(x);
        }
        else if (command == "OF") {
            if (!number.empty()) {
                number.pop_front();
            }
        }
        else if (command == "OB") {
            if (!number.empty()) {
                number.pop_back();
            }
        }
    }
    if (!number.empty()) {
        for (auto x : number) {
            cout << x << " ";
        }
    }
    else {
        cout << "EMPTY";
    }

    return 0;
}