// Parth Parmar (Parth-Parmar)
// 14 Nov 2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        string s;
        cin >> s;

        int m = 2 * n;
        long long red = 0, blue = 0;
        for (int i = 0; i < m; i++) {
            if (s[i] == '0') continue;
            int nx = (i + 1) % m;
            int pos = (s[nx] == '0') ? nx : i;
            if ((pos + 1) % 2 == 0) red++;
            else blue++;
        }
        cout << red << " " << blue << "\n";
    }
    return 0;
}