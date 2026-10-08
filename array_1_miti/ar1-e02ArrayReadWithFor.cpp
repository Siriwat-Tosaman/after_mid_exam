#include <iostream>
using namespace std;

int main() {
    int x[5] = {100, 200, 300, 400, 500};
    int i = 0;

    while (i < 5) {
        cout << "Element " << i + 1 << " = " << x[i] << endl;
        i++;
    }

    /*for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << " = " << x[i] << endl;
    }*/

    return 0;
}