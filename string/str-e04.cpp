#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "What's up!";
    int i = 0;
    cout << word << endl;

    while (word[i] != '\0') {
        i++;
    }
    cout << "Word leght = " << i << endl;

    return 0;
}