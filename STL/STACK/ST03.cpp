#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    stack<char> st;

    for (char c : s) {
        while (!st.empty() && k > 0 && st.top() > c) {
            st.pop();
            k--;
        }
        st.push(c);
    }

    while (k > 0 && !st.empty()) {
        st.pop();
        k--;
    }

    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    int pos = 0;
    while (pos < (int)ans.size() && ans[pos] == '0') {
        pos++;
    }

    if (pos == (int)ans.size()) {
        cout << "0\n";
    } else {
        cout << ans.substr(pos) << '\n';
    }

    return 0;
}