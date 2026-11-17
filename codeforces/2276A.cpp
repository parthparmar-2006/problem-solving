// Parth Parmar (Parth-Parmar)
// 15 Nov 2026

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a <= b) cout << -1 << "\n";
        else cout << min(b, a - b) << "\n";
    }
}