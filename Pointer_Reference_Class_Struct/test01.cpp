#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 7;
    int *p = &x;
    int &r = y;
    *p = r;
    p = &y;
    *p = 1;
    r = r + 10;
    cout << x << " " << y;

    return 0;
}