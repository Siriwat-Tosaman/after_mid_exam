#include <iostream>
using namespace std;



int main() {
    int N, T, M, pass = 0;
    int r, t, m;
    long long e, a;

    cin >> N >> T >> M;

    for (int i = 1; i <= N; i++) {
        cin >> r >> t >> m >> e >> a;
        if (r != 0) {
            cout << "X";
        }
        else if (t > T) {
            cout << "T";
        }
        else if (m > M) {
            cout << "M";
        }
        else if (e == a) {
            cout << "P";
            pass++;
        }
        else {
            cout << "-";
        }

    }
    cout << endl;
    
    int result = 100 * pass / N;
    cout << result;

    return 0;
}