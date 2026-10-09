#include <iostream>
using namespace std;

int main() {
    char ch1 = 'a', ch2 = 'b';
    char name[] = "John";
    char sname[] = {'S', 'm', 'i', 't', 'h'};

    cout << ch1 << " " << ch2 << endl;
    cout << name << " " <<  sname << endl;
    name[2] = 'a';
    cout << name << " " <<  sname << endl;
    
    ch1 = ch2;
    cout << ch1 << " " << ch2 << endl;

    return 0;
}