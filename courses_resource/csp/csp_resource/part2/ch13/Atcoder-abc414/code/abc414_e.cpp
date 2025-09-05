#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;

long long n, ans;

int main() {
    cin >> n;
    // n*(n-1)/2
    {
        long long x = n, y = n+1;
        if (x % 2 == 0) x /= 2;
        else y /= 2;
        ans = (x % mod) * (y % mod) % mod;
    }
    long long x = sqrtl(n);
    // ±¶Êý >= x
    for (long long i = 1; n / i > x; i++) {
        ans = (ans - (n/i)%mod + mod) % mod;
    }
    // ±¶Êý <= x µÄ
    for (long long b = x; b >= 1; b--) {
        long long l = n/(b+1)+1, r = n/b;
        long long tmp = (r - l + 1) % mod * b % mod;
        ans = (ans - tmp + mod) % mod;
    }
    cout << ans << endl;
    return 0;
}

