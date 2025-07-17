/*************************************************************************
	> File Name: 1.LC796.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  7/16 15:04:10 2025
 ************************************************************************/

class Solution {
public:
    void getNext(string &s, vector<int> &nxt) {
        nxt[0] = -1;
        for (int i = 1, j = -1; s[i]; i++) {
            while (j != -1 && s[j + 1] != s[i]) j = nxt[j];
            if (s[j + 1] == s[i]) j += 1;
            nxt[i] = j;
        }
        return ;
    }
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        goal += goal;
        vector<int> nxt(s.size(), 0);
        getNext(s, nxt);
        for (int i = 0, j = -1; goal[i]; i++) {
            while (j != -1 && s[j + 1] != goal[i]) j = nxt[j];
            if (s[j + 1] == goal[i]) j += 1;
            if (j + 1 == s.size()) return true;
        }
        return false;
    }
};
