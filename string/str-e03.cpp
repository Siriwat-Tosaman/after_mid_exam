#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    cout << word << endl;

    string word2;
    word2 = "This is a good Day";
    cout << word2 << endl;

    word2 = word;
    cout << word2 << endl;

    return 0;
}