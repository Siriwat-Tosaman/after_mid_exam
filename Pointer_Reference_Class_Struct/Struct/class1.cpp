#include <iostream>
using namespace std;

class Counter {
    int n;
public:
    Counter() {
        n = 0;
    }
    void add() {
        n++;
    }
    int get() {
        return n;
    }
};

int main() {
    Counter c;
    c.add(); c.add(); c.add(); c.add(); c.add(); c.add();
    cout << c.get();

    return 0;
}