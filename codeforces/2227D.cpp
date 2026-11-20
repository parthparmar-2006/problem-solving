// Parth Parmar (Parth-Parmar)
// 20 Nov 2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int size = 2 * n;
        vector<int> a(size);
        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }

        vector<int> pos0, pos1;
        for (int i = 0; i < size; i++) {
            if (a[i] == 0) pos0.push_back(i);
            if (a[i] == 1) pos1.push_back(i);
        }

        int answer = 1; 

        vector<vector<int>> pairs;
        pairs.push_back(pos0);
        if (n >= 2) pairs.push_back(pos1);

        for (vector<int> p : pairs) {
            int sum = p[0] + p[1];

            int left, right;
            if (sum % 2 == 0) {
                left = sum / 2;
                right = sum / 2;
            } else {
                left = sum / 2;
                right = sum / 2 + 1;
            }

            if (a[left] != a[right]) continue;

            while (left - 1 >= 0 && right + 1 < size && a[left - 1] == a[right + 1]) {
                left--;
                right++;
            }

            vector<bool> present(n + 1, false);
            for (int i = left; i <= right; i++) {
                present[a[i]] = true;
            }

            int mex = 0;
            while (present[mex]) {
                mex++;
            }

            answer = max(answer, mex);
        }

        cout << answer << "\n";
    }

    return 0;
}