#include <bits/stdc++.h>
using namespace std;
const int maxn = 505;
const long long inf = 1e12;

long long f[maxn][maxn];
int n, m, K, Q;
long long T;
bool vis[maxn];

long long value(long long x) {
    return (x == inf) ? 0 : x;
}

void update(int x, int y) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            f[i][j] = min({ f[i][j], f[i][x] + f[x][y] + f[y][j], f[i][y] + f[y][x] + f[x][j] });
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    // 节点编号 0 ~ n （特殊点0）
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            f[i][j] = (i==j) ? 0 : inf;
    while (m--) {
        int u, v;
        long long w;
        scanf("%d%d%lld", &u, &v, &w);
        f[u][v] = f[v][u] = min(f[u][v], w);
    }
    scanf("%d%lld", &K, &T);
    for (int i = 0, x; i < K; i++) {
        scanf("%d", &x);
        vis[x] = true;
        f[x][0] = T;
        f[0][x] = 0;
    }
    // 先跑一遍floyd
    for (int k = 0; k <= n; k++)
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    scanf("%d", &Q);
    while (Q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int x, y;
            long long t;
            scanf("%d%d%lld", &x, &y, &t);
            f[x][y] = min(f[x][y], t);
            f[y][x] = min(f[y][x], t);
            update(x, y);
        }
        else if (op == 2) {
            int x;
            scanf("%d", &x);
            if (!vis[x]) {
                vis[x] = true;
                f[x][0] = T;
                f[0][x] = 0;
                update(x, 0);
            }
        }
        else { // op == 3
            long long ans = 0;
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= n; j++)
                    ans += value(f[i][j]);
            printf("%lld\n", ans);
        }
    }
    return 0;
}
