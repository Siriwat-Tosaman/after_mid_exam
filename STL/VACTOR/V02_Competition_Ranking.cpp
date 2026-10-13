#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> score;
    score.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    sort(score.begin(), score.end(), greater<int>());
    score.erase(unique(score.begin(), score.end()), score.end());
    
    int q;
    while (k--) {
        cin >> q;
        if (score.size() >= q) {
            cout << score[q - 1] << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}