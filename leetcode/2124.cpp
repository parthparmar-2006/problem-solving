// Parth Parmar (Parth-Parmar)
// 22 Nov 2026

class Solution {
public:
    bool checkString(string s) {
        bool flag=false;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='b') {
                flag = true;
            }
            if (flag && s[i]=='a') return false;
        } return true;
    }
};