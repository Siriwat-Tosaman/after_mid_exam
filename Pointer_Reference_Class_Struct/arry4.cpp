#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a + 1;
    *p = *(p + 2);
    p++;
    *p += 1;
    cout << a[1] << " " << a[2] << " " << *(a + 4) << " " << (p - a);

    return 0;
}