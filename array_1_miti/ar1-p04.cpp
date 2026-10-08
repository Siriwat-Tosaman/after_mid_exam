#include <iostream>
using namespace std;

int main() {
    float data[7];
    float sum = 0, min, max;

    for (int i = 0; i < 7; i++) {
        cin >> data[i];
        sum += data[i];
        if (i == 0) {
            min = max = data[i];
        } else {
            if (data[i] < min) min = data[i];
            if (data[i] > max) max = data[i];
        }
    }
    cout << sum << endl << sum / 7 << endl;
    cout << min << " " << max << endl;

    return 0;
}