#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> adj[N];
int n, m;

int A[N];

void dfs(int u, int who) {
    A[u] = who;
    for (auto v : adj[u]) {
        if (!A[v]) {
            dfs(v, who);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u); // 建立了反图
    }
    for (int i = n; i >= 1; i--) {
        if (!A[i])
            dfs(i, i);
    }
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " \n"[i == n];
    }
    return 0;
}