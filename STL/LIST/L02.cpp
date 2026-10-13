#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    list<int> song;

    while (n--) {
        int a;
        cin >> a;
        song.push_back(a);
    }

    string command;
    while (q--) {
        cin >> command;
        int x, y;
        
        if (command == "BEFORE") {
            cin >> x >> y;
            auto it = find(song.begin(), song.end(), y);
            song.insert(it, x);
        }
        else if (command == "AFTER") {
            cin >> x >> y;
            auto it = find(song.begin(), song.end(), y);
            song.insert(next(it), x);
        }
        else if (command == "DELETE") {
            cin >> x;
            auto it = find(song.begin(), song.end(), x);
            song.erase(it);
        }
    }
    if (song.empty()) {
        cout << "EMPTY\n";
    }
    else {
        for (auto it = song.begin(); it != song.end(); ++it) {
            if (it != song.begin()) cout << " ";
            cout << *it;
        }
        cout << endl;
    }

    return 0;
}