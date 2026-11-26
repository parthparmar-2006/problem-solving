// Parth Parmar (ParthParmar_06)
// 26 Nov 2026

class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        bool alice = true;
        while ((n-i)>=0) {
            n-=i;
            i--;
            if (i%2) alice = false;
            else alice = true;
        } return !alice;
    }
};