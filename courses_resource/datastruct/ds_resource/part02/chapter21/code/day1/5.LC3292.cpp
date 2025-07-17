/*************************************************************************
	> File Name: 5.LC3292.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  7/14 19:31:19 2025
 ************************************************************************/

class Solution {
public:
    typedef pair<long long, long long> PLL;
    set<PLL> ws;
    struct StringHash {
        const long long mod = 1e9+7;
        vector<long long> h, b;
        StringHash(string &s, long long base) 
        : h(s.size() + 1, 0), b(s.size() + 1, 0) {
            b[0] = 1;
            for (int i = 1, n = s.size(); i <= n; i++) {
                b[i] = b[i - 1] * base % mod;
                h[i] = (h[i - 1] * base + s[i - 1]) % mod;
            }
        }
        long long get(int l, int r) {
            return (h[r] - h[l - 1] * b[r - l + 1] % mod + mod) % mod;
        }
    };
    int minValidStrings(vector<string>& words, string target) {
        for (auto s : words) {
            StringHash h1(s, 13131), h2(s, 9973);
            for (int i = 0; s[i]; i++) {
                ws.insert(PLL(h1.get(1, i + 1), h2.get(1, i + 1)));
            }
        }
        StringHash h1(target, 13131), h2(target, 9973);
        int n = target.size();
        vector<int> dist(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int l = i, r = n, mid;
            while (l < r) {
                mid = (l + r) / 2;
                long long c1 = h1.get(i + 1, mid + 1);
                long long c2 = h2.get(i + 1, mid + 1);
                PLL key(c1, c2);
                if (ws.find(key) != ws.end()) l = mid + 1;
                else r = mid;
            }
            dist[i] = l;
        }
        int ans = 1;
        for (int i = 0, p = dist[0]; p < n;) {
            ans += 1;
            int ind = i;
            for (int j = i + 1; j <= p; j++) {
                if (dist[j] > dist[ind]) ind = j;
            }
            if (ind == i) return -1;
            i = ind;
            p = dist[ind];
        }
        return ans;
    }
};
