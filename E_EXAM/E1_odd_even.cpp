#include <iostream>
using namespace std;

int main() {
    long long n, count_Odd = 0, count_Even = 0, sum_Odd = 0;
    cin >> n;

    long long numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            count_Even++;
        }
        else {
            count_Odd++;
            sum_Odd += numbers[i];
        }
    }
    cout << count_Even << " " << count_Odd << " " << sum_Odd;

    return 0;
}