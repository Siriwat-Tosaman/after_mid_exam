#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> st;
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (!st.empty() && st.top() == c) {
            st.pop();
        }
        else {
            st.push(c);
        }
    }
    if (st.empty()) {
        cout << "EMPTY" << endl;
    }
    else {
        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}