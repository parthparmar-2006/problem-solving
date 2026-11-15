// Parth Parmar (Parth-Parmar)
// 15 Nov 2026

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size(), ans=0;
        int pre=0, odd=0, even=1, MOD=1e9+7;
        for (int i=0; i<n; i++) {
            pre += arr[i];
            if (pre%2) {
                ans += even;
                odd++;
            } else {
                ans += odd;
                even++;
            }
            ans %= MOD;
        } return ans;
    }
};