#include <iostream>
using namespace std;

int main() {
    int num[2][4] = {{1,2,3,4}, {6,7,8,9}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
    cout << sizeof(num[2][4]);
    return 0;
}