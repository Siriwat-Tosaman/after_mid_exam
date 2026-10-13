#include <iostream>
using namespace std;

void jump() {
    cout << "Robot is Jumping!!deng deng 555555";
}
void shoot() {
    cout << "Robot is Shooting!!!!!!!! 55555555";
}
void defend() {
    cout << "Robot is Defending eieiei -_-";
}

int main() {
    void (*function[3])() = {jump, shoot, defend};
    int index;
    
    cout << "--- fighting game option ---" << endl << "[0] jump [1] shoot [2] defend" << endl << "choose your option : ";
    cin >> index;

    function[index]();

    return 0;
}