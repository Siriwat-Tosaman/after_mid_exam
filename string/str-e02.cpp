#include <iostream>
using namespace std;

int main() {
    char name[20], lastname[20];
    cout << "enter your name : ";
    cin >> name;

    cout << "enter your last name : ";
    cin >> lastname;

    cout << name[0] << endl;
    cout << (int)name[0] << endl;

    return 0;
}