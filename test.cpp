#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N, S, A, B, C;
    cin >> N >> S >> A >> B >> C;

    ll base = S - A * N, d1 = B - A, d2 = C - A;
    ll best = -1, bx = 0, by = 0, bz = 0;

    for (ll z = 0; z <= N; z++) {
        ll rem = base - d2 * z;
        if (rem < 0) break;
        if (rem % d1) continue;
        ll y = rem / d1, x = N - y - z;
        if (x < 0) continue;
        ll F = x * x + y * y + z * z;
        if (best < 0 || F <= best) {
            best = F; bx = x; by = y; bz = z;
        }
    }

    if (best < 0) cout << -1 << "\n";
    else cout << bx << " " << by << " " << bz << "\n" << best << "\n";
    return 0;
}