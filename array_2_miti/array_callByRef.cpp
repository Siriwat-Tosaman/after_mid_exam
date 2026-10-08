#include <iostream>
using namespace std;

void func2d(int af[][5]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << af[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[2][5] = {{1, 3, 5, 7, 9}, {2, 4, 6, 8, 10}};
    func2d(a);

    return 0;
}