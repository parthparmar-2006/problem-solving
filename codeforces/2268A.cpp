// Parth Parmar (Parth-Parmar)
// 14 Nov 2026

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int p = k - 1;
        long long ans = 0;
        for (int j = 0; j < min(p, n - p); j++) ans += max(a[j], a[n - 1 - j]);
        for (int j = p; j < n - p; j++) ans += a[j];
        cout << ans << endl;
    }
}