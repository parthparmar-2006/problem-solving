// Parth Parmar (Parth-Parmar)
// 16 Nov 2026

class Solution {
public:
    string digitSum(string s, int k) {
        string temp = "";
        while (s.size()>k) {
            for (int i=0; i<s.size();) {
                int sum=0;
                for (int j=i; j<min(i+k, (int)s.size()); j++) {
                    sum += (s[j]-'0');
                }
                temp += to_string(sum);
                i+=k;
            }
            s = temp;
            temp = "";
        } return s;
    }
};