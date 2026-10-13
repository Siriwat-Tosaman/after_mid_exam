#include <iostream>
#include <stack>
using namespace std;

int main() {
    int number;
    cin >> number;
    stack<int> num;

    for (int i = 0; i < number; i++) {
        int x;
        cin >> x;
        num.push(x);
    }

    while (!num.empty()) {
        cout << num.top() << " ";
        num.pop();
    }

    return 0;
}