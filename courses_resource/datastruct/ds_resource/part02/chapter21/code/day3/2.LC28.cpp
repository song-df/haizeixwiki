/*************************************************************************
	> File Name: 2.LC28.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  7/16 15:03:06 2025
 ************************************************************************/

class Solution {
public:
    void getZ(string &s, vector<int> &z) {
        z[0] = s.size();
        int n = s.size();
        for (int i = 1, l, r = 0; s[i]; i++) {
            if (r >= i) {
                z[i] = min(z[i - l], r - i + 1);
            }
            while (i + z[i] < n && s[i + z[i]] == s[z[i]]) ++z[i];
            if (i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
        }
        return ;
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        string s = needle + "#" + haystack;
        vector<int> z(s.size(), 0);
        getZ(s, z);
        for (int i = m + 1; s[i]; i++) {
            if (z[i] == m) return i - m - 1;
        }
        return -1;
    }
};
