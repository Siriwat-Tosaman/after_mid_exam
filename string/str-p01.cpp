#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string sname;

    cout << "enter your name : ";
    getline(cin, name);
    cout << "enter your surname : ";
    getline(cin, sname);

    int n = name.length();
    int m = sname.length();

    if (n > m) {
        for (int i = 0; i < n ; i++) {
            if (i > n) {
                cout << " " << " " << sname[i] << endl;
            }
            else if (i > m) {
                cout << name[i] << " " << " " << endl;
            }
            else {
                cout << name[i] << " " << sname[i] << endl;
            }
        }
    }
    else {
        for (int i = 0; i < m ; i++) {
            cout << name[i] << " " << sname[i] << endl;
        }
    }


    return 0;
}