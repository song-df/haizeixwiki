/*************************************************************************
	> File Name: 2.LC1268.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  7/15 16:04:52 2025
 ************************************************************************/

class Solution {
public:
    static const int maxn = 20005;
    int node[maxn][26];
    string ds[maxn][3];
    int root, cnt;
    void add_one(int p, string &s) {
        if (ds[p][0] == "" || ds[p][0] > s) {
            ds[p][2] = ds[p][1], ds[p][1] = ds[p][0], ds[p][0] = s;
        } else if (ds[p][1] == "" || ds[p][1] > s) {
            ds[p][2] = ds[p][1], ds[p][1] = s;
        } else if (ds[p][2] == "" || ds[p][2] > s) {
            ds[p][2] = s;
        }
        return ;
    }
    void insert(string &s) {
        int p = root;
        for (int i = 0; s[i]; i++) {
            int ind = s[i] - 'a';
            if (node[p][ind] == 0) node[p][ind] = ++cnt;
            p = node[p][ind];
            add_one(p, s);
        }
        return ;
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        root = cnt = 1;
        for (auto s : products) insert(s);
        vector<vector<string>> ret;
        int p = root;
        for (int i = 0; searchWord[i]; i++) {
            int ind = searchWord[i] - 'a';
            p = node[p][ind];
            ret.push_back(vector<string>());
            if (ds[p][0].size()) ret[i].push_back(ds[p][0]);
            if (ds[p][1].size()) ret[i].push_back(ds[p][1]);
            if (ds[p][2].size()) ret[i].push_back(ds[p][2]);
        }
        return ret;
    }
};
