#include <iostream>
using namespace std;

void counter() {
    static int n = 0;
    n++;
    cout << "Function called " << n << " time(s)" << endl;
}

int main() {
    for (int i = 0; i < 3; i++) {
        counter();
    }
    return 0;
}