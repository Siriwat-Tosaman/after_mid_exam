#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array, array + n);

    long long differance = array[n - 1] - array[0];
    cout << differance << endl;

    return 0;
}