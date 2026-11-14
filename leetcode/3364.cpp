// Parth Parmar (ParthParmar_06)
// 14 Nov 2026

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i=l; i<=r; i++) {
            int idx = 0;
            int sum = 0;
            while (idx < i) {
                sum += nums[idx++];
            }
            if (sum>0) {
                mini = min(mini, sum);
            }
            while (idx < n) { 
                sum -= nums[idx-i];
                sum += nums[idx++];
                if (sum>0) {
                    mini = min(mini, sum);
                }
            }
        } return mini==INT_MAX?-1:mini;
    }
};