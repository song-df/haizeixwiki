/*************************************************************************
	> File Name: 1.LC820.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  7/15 15:43:29 2025
 ************************************************************************/

class Solution {
public:
    int node[40005][205];
    string ds[40005];
    int root, cnt;
    void insert(string &s) {
        int p = root, flag;
        for (int i = 0; s[i]; i++) {
            ds[p] = "";
            int ind = s[i] - 'a';
            if (node[p][ind] == 0) {
                node[p][ind] = ++cnt;
                flag = 1;
            } else {
                flag = 0;
            }
            p = node[p][ind];
        }
        if (flag) ds[p] = s;
        return ;
    }
    int minimumLengthEncoding(vector<string>& words) {
        root = cnt = 1;
        for (auto &s : words) reverse(s.begin(), s.end());
        for (auto s : words) insert(s);
        int ans = 0;
        for (int i = 1; i <= cnt; i++) {
            if (ds[i].size()) ans += ds[i].size() + 1;
        }
        return ans;
    }
};
