#include <bits/stdc++.h>
using namespace std;

int dis[220], n, a, b, k[220];

int main() {
    while (cin >> n && n) {
        cin >> a >> b;
        for (int i = 1; i <= n; i++)
            cin >> k[i];
        // bfs
        queue<int> que;
        fill(dis+1, dis+n+1, -1);
        dis[a] = 0;
        que.push(a);
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            // u - k[u] , u + k[u]
            for (int i = -1; i <= 1; i += 2) {
                int v = u + i * k[u];
                if (v >= 1 && v <= n && dis[v] == -1) {
                    dis[v] = dis[u] + 1;
                    que.push(v);
                }
            }
        }
        cout << dis[b] << endl;
    }
    return 0;
}
