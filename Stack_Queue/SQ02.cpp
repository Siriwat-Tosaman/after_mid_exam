#include <iostream>
#include <queue>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<int> customer;
    while (Q--) {
        string command;
        cin >> command;
        if (command == "ARRIVE") {
            int x;
            cin >> x;
            customer.push(x);
        }
        else if (command == "SERVE") {
            if (customer.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << customer.front() << endl;
                customer.pop();
            }
        }
        else if (command == "NEXT") {
            if (customer.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << customer.front() << endl;
            }
        }
        else if (command == "COUNT") {
            cout << customer.size() << endl;
        }
    }
    return 0;
}