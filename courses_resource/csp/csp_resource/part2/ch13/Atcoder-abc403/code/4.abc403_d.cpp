#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;

int n, D, a, cnt[maxn], f[maxn][2], ans;

int main() {
    scanf("%d%d", &n, &D);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        cnt[a]++;
    }
    if (D == 0) {
        for (int i = 0; i < maxn; i++)
            if (cnt[i])
                ans++;
    }
    else {
        for (int p = 0; p < D; p++) {
            // p, p+D, p+2D, ... 最多能选几个
            int x;
            for (int i = p; i < maxn; x = i, i += D) {
                if (i == p) {
                    f[i][1] = cnt[i];
                    f[i][0] = 0;
                }
                else {
                    f[i][1] = f[i-D][0] + cnt[i];
                    f[i][0] = max(f[i-D][1], f[i-D][0]);
                }
            }
            ans += max(f[x][1], f[x][0]);
        }
    }
    printf("%d\n", n - ans);
    return 0;
}
