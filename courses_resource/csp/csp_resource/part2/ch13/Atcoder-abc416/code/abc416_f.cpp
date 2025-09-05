#include <bits/stdc++.h>
using namespace std;
/**
普通转移
f[u][i][t] <-- f[u][i-j][t] + f[v][j][x]
特殊转移
(1) f[u][i][1] <-- f[u][i-j][0] + f[v][j][1] + a[u]
(2) f[u][i][2] <-- f[u][i-j+1][1] + f[v][j][1]
*/
const int maxn = 2e5 + 5;

int n, K, a[maxn];
long long f[maxn][6][3], tmp[6][3];
vector<int> g[maxn];


void dfs(int u, int p) {
    f[u][0][0] = 0;
    f[u][1][1] = f[u][1][2] = a[u];
    for (auto v : g[u]) {
        if (v != p) {
            dfs(v, u);
            memset(tmp, -0x3f, sizeof tmp); // tmp[i][t] 代表 f[u][i][t]
            for (int i = 1; i <= K; i++) {
                for (int j = 1; j <= i; j++) {
                    // 普通转移
                    // f[u][i][t] <- f[u][i-j][t] + f[v][j][x]
                    for (int t = 0; t <= 2; t++)
                        for (int x = 0; x <= 2; x++)
                            tmp[i][t] = max(tmp[i][t], f[u][i-j][t] + f[v][j][x]);
                    // 特殊转移 f[u][i][1] <-- f[u][i-j][0] + f[v][j][1] + a[u]
                    tmp[i][1] = max(tmp[i][1], f[u][i-j][0] + f[v][j][1] + a[u]);
                    // 特殊转移 f[u][i][2] <-- f[u][i-j+1][1] + f[v][j][1]
                    tmp[i][2] = max(tmp[i][2], f[u][i-j+1][1] + f[v][j][1]);
                }
            }
            for (int i = 0; i <= K; i++)
                for (int j = 0; j <= 2; j++)
                    f[u][i][j] = max(f[u][i][j], tmp[i][j]);
        }
    }
}

int main() {
    scanf("%d%d", &n, &K);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    for (int i = 1, u, v; i < n; i++) {
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    memset(f, -0x3f, sizeof f);
    dfs(1, -1);
    long long ans = 0;
    for (int i = 0; i <= K; i++)
        for (int j = 0; j <= 2; j++)
            ans = max(ans, f[1][i][j]);
    printf("%lld\n", ans);
    return 0;
}
