#include <iostream>
using namespace std;

int main() {
    int a[4] = {10, 20, 30, 40};
    int *p = a;

    for (int i = 0; i < 4; i++) {
        cout << p[i] << " " << &a[i] << " " << &p[i] << endl;
    }

    return 0;
}