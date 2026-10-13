#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int a[3] = {1, 2, 3};
    cout << &x << "\n";
    cout << &a[0] << " " << &a[1];
}