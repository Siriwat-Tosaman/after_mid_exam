#include <iostream>
using namespace std;

int main() {
    int n, find_number;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cin >> find_number;
    for (int i = 1; i < n; i++) {
        if (ar[i] == find_number) {
            cout << ar[i] << " found.";
            return 0;
        }
    }
    
    cout << "Not found.";
    return 0;
}