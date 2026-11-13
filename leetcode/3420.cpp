// Parth Parmar (ParthParmar_06)
// 13 Nov 2026

class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> nge(n, n);
        stack<int> st;
        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && nums[st.top()]<nums[i]) st.pop();
            nge[i] = !st.empty()? st.top(): n;
            st.push(i);
        }
        deque<int> q;
        int i=0, j=0;
        long long op=0, ans=0;
        while (j<n) {
            while (!q.empty() && q.back()<nums[j]) q.pop_back();
            q.push_back(nums[j]);
            op += q.front()-nums[j];
            while (op>k) {
                int end = min(nge[i], j+1);          
                for (int p=i+1; p<end; p=nge[p])
                    op -= (long long)(nums[i]-nums[p]) * (min(nge[p], end)-p);
                if (nums[i]==q.front()) q.pop_front();
                i++; 
            }
            ans += (j-i+1);
            j++;
        } return ans;
    }
};