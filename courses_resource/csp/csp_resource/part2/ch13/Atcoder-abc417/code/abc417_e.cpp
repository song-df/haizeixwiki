#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

int T, n, m, X, Y, p[maxn], idx;
bool vis[maxn];
vector<int> g[maxn];

void init() {
    for (int i = 1; i <= n; i++) {
        g[i].clear();
        vis[i] = false;
    }
    idx = 0;
}

bool dfs(int u) {
    if (vis[u])
        return false;
    vis[u] = true;
    if (u == Y) {
        p[++idx] = u;
        return true;
    }
    for (auto v : g[u]) {
        if (dfs(v)) {
            p[++idx] = u;
            return true;
        }
    }
    return false;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d%d%d", &n, &m, &X, &Y);
        init();
        for (int i = 0, u, v; i < m; i++) {
            scanf("%d%d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int u = 1; u <= n; u++)
            sort(g[u].begin(), g[u].end());
        dfs(X);
        // p[idx], p[idx-1], .., p[1]
//        cout << "ans = ";
        for (int i = idx; i >= 1; i--)
            printf("%d ", p[i]);
        puts("");
    }
    return 0;
}
