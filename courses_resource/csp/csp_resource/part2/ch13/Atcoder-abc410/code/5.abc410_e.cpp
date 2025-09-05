#include <bits/stdc++.h>
using namespace std;
const int maxn = 3030;

int n, H, W, a[maxn], b[maxn], f[maxn][maxn], ans;

int main() {
    scanf("%d%d%d", &n, &H, &W);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", a+i, b+i);
    memset(f, -1, sizeof f);
    f[0][H] = W;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= H; j++) {
            if (f[i-1][j] < 0)
                continue;
            if (j >= a[i])
                f[i][j-a[i]] = max(f[i][j-a[i]], f[i-1][j]),
                ans = i;
            if (f[i-1][j] >= b[i])
                f[i][j] = max(f[i][j], f[i-1][j] - b[i]),
                ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
