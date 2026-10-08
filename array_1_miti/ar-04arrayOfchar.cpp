#include <iostream>
using namespace std;

int main() {
    char ch1[] = "Elon";
    char ch2[] = {'M', 'U', 'S', 'k', '\0'};

    int i = 0;
    while (ch1[i] != '\0') {
        cout << ch1[i] << endl;
        i++;
    }
    cout << "\n";

    i = 0;
    while (ch2[i] != '\0') {
        cout << ch2[i] << endl;
        i++;
    }
    cout << sizeof(ch1) << endl;
    cout << sizeof(ch2);
    return 0;
}