// Parth Parmar (Parth-Parmar)
// 16 Nov 2026

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

ll f(ll m) {
    ll z = n - m;
    return 1 + m * (m + 1) / 2 + z * (z + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll k;
        string s;
        cin >> n >> k >> s;

        ll m = count(s.begin(), s.end(), '1');

        ll lo = max(0LL, m - k);
        ll hi = min(n, m + k);

        cout << max(f(lo), f(hi)) << endl;
    }
}