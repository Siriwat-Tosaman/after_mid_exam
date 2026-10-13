#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;
    int *p[3] = {&x, &y, &z};
    for (int i = 0; i < 3; i++) {
        cout << "Index " << i << " point to Adress: "<< &p[i] << " | equal to = " << *p[i] << endl;
    }

    return 0;
}