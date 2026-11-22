// Parth Parmar (Parth-Parmar)
// 22 Nov 2026

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<char> st;
        for (int i=0; i<n/2; i++) {
            if (s[i]!=s[n-i-1]) {
                char maxi = max(s[i], s[n-i-1]);
                char mini = min(s[i], s[n-i-1]);
                for (char ch=maxi; ch>mini; ch--) {
                    st.insert(ch);
                }
            }
        } cout << st.size() << endl;
    }
}