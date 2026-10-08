#include <iostream>
using namespace std;

int main() {
    int student[2][5], sum1 = 0, sum2 = 0, sum_all = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> student[i][j];
            if (i == 0) {
                sum1 += student[i][j];
            }
            if (i == 1) {
                sum2 += student[i][j];
            }
            sum_all += student[i][j];
        }
    }
    cout << "Class 1 average height = " << sum1 / 5 << endl;
    cout << "Class 2 average height = " << sum2 /5 << endl;
    cout << "All average height = " << sum_all / 10 << endl;

    return 0;
}