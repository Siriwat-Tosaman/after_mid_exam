#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int vowel(string word) {
    string vowel = "AEIOUaeiou";
    int adabracadabra = 0;
    int n = word.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            if (word[i] == vowel[j]) {
                adabracadabra++;
            }
        }
    }
    return adabracadabra;
}

int main() {
    string sensei;
    getline(cin, sensei);

    int vc = vowel(sensei);
    cout << vc;

    return 0;
}