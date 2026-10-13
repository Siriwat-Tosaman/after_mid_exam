#include <iostream>
using namespace std;

int main() {
    int score = 10;
    int *ptr = &score;
    cout << "HP before: " << score << endl;

    *ptr = 20;
    cout << "HP after remote change: " << *ptr << endl;

    return 0;
}