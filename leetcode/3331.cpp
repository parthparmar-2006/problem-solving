// Parth Parmar (ParthParmar_06)
// 21 Nov 2026

class Solution {
public:
    vector<vector<int>> children;
    vector<int> ans;
    int last[26];
    string str;

    void dfs(int node, int origParent) {
        int c = str[node] - 'a';
        int newParent = (last[c] != -1) ? last[c] : origParent;

        int saved = last[c];
        last[c] = node;

        ans[node] = 1;
        for (int child : children[node]) {
            dfs(child, node);
        }

        last[c] = saved;

        if (newParent != -1) {
            ans[newParent] += ans[node];
        }
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();
        str = s;
        children.assign(n, {});
        ans.assign(n, 0);
        for (int i = 0; i < 26; i++) last[i] = -1;

        for (int i = 1; i < n; i++) {
            children[parent[i]].push_back(i);
        }

        dfs(0, -1);
        return ans;
    }
};