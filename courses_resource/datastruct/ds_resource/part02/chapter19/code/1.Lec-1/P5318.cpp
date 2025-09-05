#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

// 采用邻接表的形式存储图的结构
vector<int> adj[N];

int n, m;

vector<int> ans;
bool vis[N];

void dfs(int u) {
    ans.push_back(u);
    vis[u] = true;
    for (auto v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}
void dfs_solver() {
    memset(vis, false, sizeof(vis));
    dfs(1);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

void bfs(int u) {
    queue<int> q;
    vis[u] = true; q.push(u);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ans.push_back(u);
        for (auto v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}
void bfs_solver() {
    memset(vis, false, sizeof(vis));
    ans.clear();
    bfs(1);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs_solver();
    bfs_solver();
    return 0;
}