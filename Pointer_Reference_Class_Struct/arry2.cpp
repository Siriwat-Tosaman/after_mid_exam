#include <iostream>
using namespace std;

void show(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int a[4] = {10, 20, 30, 40};
    show(a, 4);

    return 0;
}