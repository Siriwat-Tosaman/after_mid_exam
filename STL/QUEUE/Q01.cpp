#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> student;
    string command;
    while (n--) {
        int x;
        cin >> command;
        if (command == "JOIN") {
            cin >> x;
            student.push(x);
        }
        else if (command == "SERVE") {
            if (!student.empty()) {
                cout << student.front() << endl;
                student.pop();
            }
            else {
                cout << "EMPTY" << endl;
            }
        }
        else if (command == "FRONT") {
            if (!student.empty()) {
                cout << student.front() << endl;
            }
            else {
                cout << "EMPTY" << endl;
            }
        }
    }

    return 0;
}