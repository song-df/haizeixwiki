#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;

int n, m;
long long x[maxn], d[maxn], ans;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%lld", x+i);
    sort(x+1, x+n+1);
    n = unique(x+1, x+n+1) - x - 1;
    if (n <= m) {
        puts("0");
        return 0;
    }
    // n > m
    // x[1..n]
    for (int i = 1; i < n; i++)
        d[i] = x[i+1] - x[i];
    // d[1..n-1]
    sort(d+1, d+n, greater<long long>());
    ans = x[n] - x[1];
    for (int i = 1; i < m; i++)
        ans -= d[i];
    printf("%lld\n", ans);
    return 0;
}
