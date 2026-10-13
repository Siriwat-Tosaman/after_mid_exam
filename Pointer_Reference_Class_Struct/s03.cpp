#include <iostream>
using namespace std;

int generateEmployeeID() { 
    static int count = 1000;
    count++;

    return count;
}

int main() {
    for (int i = 0; i < 3; i++) {
        cout << "New ID: " << generateEmployeeID() << endl;
    }
}