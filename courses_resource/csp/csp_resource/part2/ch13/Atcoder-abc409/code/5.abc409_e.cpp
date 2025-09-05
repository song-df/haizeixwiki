#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

int n, x[maxn];
long long f[maxn], ans;

struct Edge {
    int v, w;
};
vector<Edge> g[maxn];

void dfs(int u, int p, int pw) {
    f[u] = x[u];
    for (auto e : g[u]) {
        int v = e.v, w = e.w;
        if (v != p) {
            dfs(v, u, w);
            f[u] += f[v];
        }
    }
    ans += abs(f[u]) * pw;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", x+i);
    for (int i = 1; i < n; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        g[u].push_back({ v, w });
        g[v].push_back({ u, w });
    }
    dfs(1, -1, 0);
    assert(f[1] == 0);
    printf("%lld\n", ans);
    return 0;
}

