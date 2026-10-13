#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    for (int *p = a; p != a + 5; p++) {
        cout << *p << " ";
    }

    int *s = a + 1, *e = a + 4;
    cout << e - s;

    return 0;
}