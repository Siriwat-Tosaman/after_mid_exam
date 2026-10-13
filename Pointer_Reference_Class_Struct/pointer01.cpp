#include <iostream>
using namespace std;

int main() {
    int score = 100;
    int *ptr = &score;
    cout << "Value of score: " << score << endl;
    cout << "Address of score (&score): " << &score << endl;
    cout << "Value via pointer (*ptr): " << *ptr << endl;

    return 0;
}