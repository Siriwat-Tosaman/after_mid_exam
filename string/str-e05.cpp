#include <iostream>
using namespace std;

bool checkSubString(string a, int n, string suba, int subn) {
    int checksubn = 0;
    for (int i = 0; i < n - subn + 1; i++) {
        for (int j=0; j < subn; j++) {
            if (a[i+j] == suba[j]) {
                checksubn++;
            }
            if (checksubn == subn) {
                return true;
            }
        }
        /*if (a[i] == suba[0]) {
            if (a[i + 1] == suba[1]) {
                if (a[i + 2] == suba[2]) {
                    return true;
                }
            }
        }*/
    }
    return false;
}

int main() {
    string name;
    name = "siriwat tosaman";
    cout << name << endl;

    string substring;
    cout << "enter some substring : ";
    getline(cin, substring);

    if (checkSubString(name, name.length(), substring, substring.length())) {
        cout << substring << " is substring of " << name << endl;
    }
    else {
        cout << substring << " is not substring of " << name << endl;
    }
}