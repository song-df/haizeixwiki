/*************************************************************************
	> File Name: 2.LC1044.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  7/14 15:13:44 2025
 ************************************************************************/

class Solution {
public:
    struct StringHash {
        vector<long long> h, b;
        const int mod = 1e9+7;
        long long base;
        StringHash(string &s, long long base)
        : base(base), h(s.size() + 1, 0), b(s.size() + 1, 0) {
            b[0] = 1;
            for (int i = 0; s[i]; i++) b[i + 1] = b[i] * base % mod;
            for (int i = 0; s[i]; i++) h[i + 1] = (h[i] * base + s[i]) % mod;
        }
        long long get(int l, int r) {
            return (h[r] - h[l - 1] * b[r - l + 1] % mod + mod) % mod;
        }
    };
    string ans;
    typedef pair<long long, long long> PLL;
    bool check(int l, StringHash &h1, StringHash &h2, int n, string &t) {
        set<PLL> s;
        for (int i = l; i <= n; i++) {
            int c1 = h1.get(i - l + 1, i);
            int c2 = h2.get(i - l + 1, i);
            PLL key(c1, c2);
            if (s.find(key) != s.end()) {
                ans = t.substr(i - l, l);
                return true;
            }
            s.insert(key);
        }
        return false;
    }
    string longestDupSubstring(string s) {
        ans = "";
        StringHash h1(s, 13131), h2(s, 9973);
        int l = 1, r = s.size() + 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (check(mid, h1, h2, s.size(), s)) l = mid + 1;
            else r = mid;
        }
        return ans;
    }
};
