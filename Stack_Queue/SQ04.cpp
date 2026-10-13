#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        stack<char> st;
        bool ok = true;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {
                if (st.empty()) {
                    ok = false;
                    break;
                }

                char t = st.top();

                if ((c == ')' && t != '(') ||
                    (c == ']' && t != '[') ||
                    (c == '}' && t != '{')) {
                    ok = false;
                    break;
                }

                st.pop();
            }
        }

        if (!st.empty()) {
            ok = false;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}