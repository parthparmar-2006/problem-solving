// Parth Parmar (Parth-Parmar)
// 26 Nov 2026

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int k; cin >> k;
        vector<int> a(n), b(n);
        int oa=0, ob=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]%2) oa++;
        }
        for (int i=0; i<n; i++) {
            cin >> b[i];
            if (b[i]%2) ob++;
        }
        if (oa>ob) {
            if (k%2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else if (oa<ob) {
            if (k%2) cout << "YES" << endl;
            else cout << "NO" << endl;
        } else cout << "YES" << endl;
    }
    
}
