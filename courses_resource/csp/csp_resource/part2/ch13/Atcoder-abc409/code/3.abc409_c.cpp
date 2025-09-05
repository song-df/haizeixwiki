#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 5;

int n, L, d[maxn], x[maxn], cnt[maxn];
long long ans;

int main() {
    scanf("%d%d", &n, &L);
    for (int i = 1; i < n; i++)
        scanf("%d", d+i);
    if (L % 3) {
        puts("0");
        return 0;
    }
    // x[1] = 0
    cnt[0]++;
    for (int i = 2; i <= n; i++) {
        x[i] = (x[i-1] + d[i-1]) % L;
        cnt[ x[i] ]++;
    }
    for (int i = 0; i < L/3; i++)
        ans += 1ll * cnt[i] * cnt[i + L/3] * cnt[i + 2*L/3];
    printf("%lld\n", ans);
    return 0;
}
