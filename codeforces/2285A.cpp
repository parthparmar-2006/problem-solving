// Parth Parmar (Parth-Parmar)
// 17 Nov 2026

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n<4) cout << -1 << endl;
        else {
            cout << "4 3 2 1 ";
            for (int i=5; i<=n; i++) cout << i << " ";
            cout << endl;
        }
    }
}