// Parth Parmar (ParthParmar_06)
// 11 Nov 2026

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long base = min(need1, need2), extra = max(need1, need2)-min(need1, need2);
        long long res = min(0ll+costBoth, 0ll+cost1+cost2)*base;
        if (need1>need2) res += min(cost1, costBoth)*extra;
        else res += min(cost2, costBoth)*extra;
        return res;
    }
};