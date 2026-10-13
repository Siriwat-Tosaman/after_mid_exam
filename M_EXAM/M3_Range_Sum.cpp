#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int lower(int array[], int n, int l) {
    int lb = lower_bound(array, array + n, l) - array;

    return lb;
}

int upper(int array[], int n, int r) {
    int ub = upper_bound(array, array + n, r) - array;

    return ub;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    int number[N];

    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }

    /*sort(number, number + N);
    printArr(number, N);
    cout << endl;*/

    for (int i = 1; i < Q; i++) {
        int l, r;
        int sum = 0;
        cin >> l >> r;

        

        int lb = lower(number, N, l);
        int ub = upper(number, N, r);

        for (int j = lb; j < ub; j++) {
            sum += number[j];
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}