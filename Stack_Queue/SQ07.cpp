#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    if (k == 1) {
        for (int i = 0; i < n; i++) {
            cout << q.front() << " ";
            q.pop();
        }
        return 0;
    }

    for (int i = 1; i <= k; i++) {
        st.push(q.front());
        q.pop();
    }
    for (int i = 1; i <= k; i++) {
        q.push(st.top());
        st.pop();
    }
    for (int i = 1; i <= n - k; i++) {
        q.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++) {
            cout << q.front() << " ";
            q.pop();
    }

    return 0;
}