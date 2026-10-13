#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> cs;

    for (char ch : s) {
        if (ch == '*') {
            if (!cs.empty()) {
                cs.pop();
            } 
        } else {
            cs.push(ch);
        }
    }
    if (cs.empty()) {
        cout << "EMPTY";
        return 0;
    }
    
    string ans;
    while (!cs.empty()) {
        ans += cs.top();
        cs.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}