#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;
const int maxn = 3e5 + 5;

long long fpow(long long a, int b) {
    long long res = 1, t = a;
    for (; b; b >>= 1, t = t * t % mod) {
        if (b & 1)
            res = res * t % mod;
    }
    return res;
}

long long inv(int a) {
    return fpow(a, mod-2);
}

int n, c, a[maxn];
long long f[maxn], tmp, sum[maxn];

int main() {
    scanf("%d%d", &n, &c);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    c = ++a[c]; // c 变成了之前颜色为c的袜子数量
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i-1] + a[i];
    long long tot = sum[n];
    c = lower_bound(a+1, a+n+1, c) - a; // c变成了数量为c的袜子的颜色编号
    for (int i = n; i >= c; i--) {
        if (i < n && a[i] == a[i+1])
            f[i] = f[i+1];
        else {
            long long fz = (tot - 1 + tmp) % mod;
            long long fm = (tot - 1 - sum[i-1]) % mod;
            f[i] = fz * inv(fm) % mod;
        }
        tmp = (tmp + a[i] * f[i] % mod) % mod;
    }
    printf("%lld\n", f[c]);
    return 0;
}
