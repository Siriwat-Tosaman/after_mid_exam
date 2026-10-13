#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    vector<int> vc;
    string command;
    while (Q--) {
        int score;
        cin >> command;
        if (command == "ADD") {
            cin >> score;
            vc.push_back(score);
        }
        else if (command == "UNDO") {
            if (!vc.empty()) {
                vc.pop_back();
            }
        }
        else if (command == "LAST") {
            if (vc.empty()) {
                cout << "EMPTY" << endl;
            }
            else {
                cout << vc.back() << endl;
            }
        }
        else if (command == "SIZE") {
            cout << vc.size() << endl;
        }
    }

    return 0;
}