/*************************************************************************
	> File Name: 3.LC677.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  7/15 16:20:34 2025
 ************************************************************************/

class MapSum {
public:
    map<string, int> raw_map;
    vector<vector<int>> node;
    vector<int> val_sum;
    int root, cnt;
    MapSum() 
    : node(3005, vector<int>(26, 0)), val_sum(3005, 0) {
        root = cnt = 1;
    }
    void __insert(string &s, int val) {
        int p = root;
        for (int i = 0; s[i]; i++) {
            int ind = s[i] - 'a';
            if (node[p][ind] == 0) node[p][ind] = ++cnt;
            p = node[p][ind];
            val_sum[p] += val;
        }
        return ;
    }
    void insert(string key, int val) {
        if (raw_map.find(key) != raw_map.end()) {
            __insert(key, -raw_map[key]);
        }
        raw_map[key] = val;
        __insert(key, raw_map[key]);
        return ;
    }
    
    int sum(string prefix) {
        int p = root;
        for (int i = 0; prefix[i]; i++) {
            int ind = prefix[i] - 'a';
            p = node[p][ind];
            if (p == 0) return 0;
        }
        return val_sum[p];
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
