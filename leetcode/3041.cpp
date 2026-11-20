// Parth Parmar (ParthParmar_06)
// 20 Nov 2026

class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> dp;
        int maxi = 0;
        for (int x : nums) {
            dp[x + 1] = dp[x] + 1; 
            dp[x] = dp[x - 1] + 1; 
            maxi = max({maxi, dp[x], dp[x + 1]});
        }
        return maxi;
    }
};