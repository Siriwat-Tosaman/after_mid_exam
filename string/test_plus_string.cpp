#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    cout << word << endl;

    string word2;
    word2 = "This is a good Day";
    cout << word2 << endl;

    string result = word + " " + word2;
    cout << "result = " << result << endl;
    cout << word.length() << endl;
    //cout << word2.lenght() << endl;

    return 0;
}