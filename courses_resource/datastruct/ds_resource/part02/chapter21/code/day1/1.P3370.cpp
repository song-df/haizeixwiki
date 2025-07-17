/*************************************************************************
	> File Name: 1.P3370.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  7/14 14:27:12 2025
 ************************************************************************/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

struct StringHash {
    vector<long long> h, b; // h[i] = position i's hash code, b[i] = base^i % mod
    const long long mod = 1e9+7;
    int base;
    StringHash(string &s, int base) : h(s.size() + 1, 0), b(s.size() + 1, 0), base(base) {
        b[0] = 1;
        for (int i = 1, n = s.size(); i <= n; i++) b[i] = b[i - 1] * base % mod;
        for (int i = 1, n = s.size(); i <= n; i++) h[i] = h[i - 1] * base + s[i - 1];
    }
    int get(int l, int r) {
        return (h[r] - h[l - 1] * b[r - l + 1] % mod + mod) % mod;
    }
};

typedef pair<long long, long long> PLL;

int main() {
    int n;
    string s;
    cin >> n;
    set<PLL> ans;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        StringHash h1(s, 13131), h2(s, 9973);
        long long c1 = h1.get(1, s.size());
        long long c2 = h2.get(1, s.size());
        ans.insert(PLL(c1, c2));
    }
    cout << ans.size() << endl;
    return 0;
}
