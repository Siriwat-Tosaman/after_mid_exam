#include <iostream>
using namespace std;

int main() {
    int num, ref, count;
    cin >> num;

    int number[100];

    for (int i = 0; i < num; i++) {
        cin >> number[i];
    }

    for (int i = 0; i < num; i++) {
        if (number[i] == -1) {
            continue;
        }
        ref = number[i];
        count = 1;
        for (int j = i + 1; j < num; j++) {
            if (number[j] == ref) {
                count += 1;
                number[j] = -1;
            }
        }
        cout << ref << " -> " << count << " times" << endl;
    }

    return 0;
}