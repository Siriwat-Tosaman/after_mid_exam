#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll extgcd(ll a, ll b, ll &x, ll &y) {
    if (!b) { x = 1; y = 0; return a; }
    ll x1, y1;
    ll g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll N, S, A, B, C;
    cin >> N >> S >> A >> B >> C;

    ll base = S - A * N, d1 = B - A, d2 = C - A;
    if (base < 0) { cout << -1 << "\n"; return 0; }

    ll g = __gcd(d1, d2);
    if (base % g) { cout << -1 << "\n"; return 0; }

    ll a = d1 / g, b = d2 / g, c = base / g;   // a*y + b*z = c

    ll z0 = 0;                                  // z ตัวแรกที่หารลงตัว
    if (a > 1) {
        ll inv, t;
        extgcd(b % a, a, inv, t);
        inv %= a; if (inv < 0) inv += a;
        z0 = (c % a) * inv % a;
    }

    ll best = -1, bx = 0, by = 0, bz = 0;
    if (z0 <= N && c - b * z0 >= 0) {
        ll y = (c - b * z0) / a;
        for (ll z = z0; z <= N && y >= 0; z += a, y -= b) {
            ll x = N - y - z;
            if (x < 0) continue;
            ll F = x * x + y * y + z * z;
            if (best < 0 || F <= best) {
                best = F; bx = x; by = y; bz = z;
            }
        }
    }

    if (best < 0) cout << -1 << "\n";
    else cout << bx << " " << by << " " << bz << "\n" << best << "\n";
    return 0;
}