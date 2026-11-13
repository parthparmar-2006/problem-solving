// Parth Parmar (ParthParmar_06)
// 12 Nov 2026

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        bool isInc=false;
        int curr=1, maxi=1;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]>nums[i-1]) {
                if (isInc) curr++;
                else {
                    curr = 2;
                    isInc = true;
                }
            } else if (nums[i]<nums[i-1]) {
                if (isInc) {
                    curr = 2;
                    isInc = false;
                } else curr++;
            } else curr = 1;
            maxi = max(maxi, curr);
        } return maxi;
    }
};