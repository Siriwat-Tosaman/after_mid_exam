#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> st;
    queue<char> q;

    for (char c : s) {
        st.push(c);
        q.push(c);
    }

    bool palin = true;
    while (!st.empty()) {
        if (st.top() != q.front()) {
            palin = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (palin) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}