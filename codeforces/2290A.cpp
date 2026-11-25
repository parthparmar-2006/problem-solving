// Parth Parmar (Parth-Parmar)
// 25 Nov 2026

#include<bits/stdc++.h> 
using namespace std;
int main() {
    int t; cin >>t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(), arr.end());
        if (arr[1]==(arr[0]+1) && arr[2]==(arr[1]+1)) cout << "Yes" << endl;
        else cout << "No" <<endl;
    }
}