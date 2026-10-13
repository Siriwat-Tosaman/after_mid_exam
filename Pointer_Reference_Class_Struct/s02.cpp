#include <iostream>
using namespace std;

void useStack() {
    int n = 0;
    n++;
    cout << "Function called " << n << " time(s)" << endl;
}
void useStatic() {
    static int n = 0;
    n++;
    cout << "Function called " << n << " time(s)" << endl;
}

int main() {
    cout << "--- Testing Stack --" << endl;
    for (int i = 0; i < 3; i++) {
        useStack();
    }

    cout << "--- Testing Static --" << endl;
    for (int i = 0; i < 3; i++) {
        useStatic();
    }
    return 0;
}