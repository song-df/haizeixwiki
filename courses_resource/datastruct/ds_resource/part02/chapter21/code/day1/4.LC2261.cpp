/*************************************************************************
	> File Name: 4.LC2261.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  7/14 19:12:59 2025
 ************************************************************************/

class Solution {
public:
    struct StringHash {
        const long long mod = 1e9+7;
        vector<long long> h, b;
        StringHash(vector<int> &nums, long long base)
        : h(nums.size() + 1, 0), b(nums.size() + 1, 0) {
            b[0] = 1;
            for (int i = 1, n = nums.size(); i <= n; i++) {
                b[i] = b[i - 1] * base % mod;
                h[i] = (h[i - 1] * base + nums[i - 1]) % mod;
            }
        }
        long long get(int l, int r) {
            return (h[r] - h[l - 1] * b[r - l + 1] % mod + mod) % mod;
        }
    };
    typedef pair<long long, long long> PLL;
    int countDistinct(vector<int>& nums, int k, int p) {
        StringHash h1(nums, 13131), h2(nums, 9973);
        vector<int> cnt(nums.size() + 1, 0);
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            cnt[i] = cnt[i - 1] + (nums[i - 1] % p == 0);
        }
        set<PLL> ans;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (cnt[j] - cnt[i - 1] > k) break;
                int c1 = h1.get(i, j);
                int c2 = h2.get(i, j);
                ans.insert(PLL(c1, c2));
            }
        }
        return ans.size();
    }
};
