#include <bits/stdc++.h>
using namespace std;
const int maxn = 1030; // > 1000 > 2^10

bool f[maxn][maxn];
int n, m;

struct Edge {
    int v, w;
};
vector<Edge> g[maxn];

void dfs(int u, int s) {
    if (f[u][s])
        return;
    f[u][s] = true;
    for (auto e : g[u]) {
        int v = e.v, w = e.w;
        dfs(v, s ^ w);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        g[u].push_back({ v, w });
    }
    dfs(1, 0);
    for (int i = 0; i < (1<<10); i++) {
        if (f[n][i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    puts("-1");
    return 0;
}
