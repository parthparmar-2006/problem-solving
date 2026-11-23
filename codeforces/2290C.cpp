// Parth Parmar (Parth-Parmar)
// 23 Nov 2026

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt=0;
        map<int, int> mp;
        vector<int> res, temp;
        for (int i=0; i<n; i++) {
            int p; cin >> p;
            mp[p]++;
        }
        for (auto j: mp) {
            cnt += min(2, j.second);
            res.push_back(j.first);
            for (int i=1; i<j.second; i++) {
                temp.push_back(j.first);
            }
        }
        sort(res.begin(), res.end());
        sort(temp.rbegin(), temp.rend());
        cout << cnt << endl;
        for (int i=0; i<res.size(); i++) cout << res[i] << " ";
        for (int i=0; i<temp.size(); i++) cout << temp[i] << " ";
        cout << endl;
    }
}