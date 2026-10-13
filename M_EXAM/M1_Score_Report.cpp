#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, topscore = -1, passCount = 0, failCount = 0;
    double score,sum = 0;
    string userID, topID;
    vector<string> failID;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> userID >> score;
        sum += score;

        if (score > topscore) {
            topscore = score;
            topID = userID;
        }
        if (score >= 50) {
            passCount++;
        }
        else {
            failCount++;
            failID.push_back(userID);
        }
    }

    double average = sum / n;

    cout << fixed << setprecision(2) << average << endl;
    cout << topID << endl << passCount << endl;
    if (failCount == 0) {
        cout << "NONE";
    }
    else {
        for (int i = 0; i < failCount; i++) {
            if (i > 0) cout << " ";
            cout << failID[i];
        }
    }

    return 0;
}