#include <bits/stdc++.h>
using namespace std;

int n, m, p[11], ans = 1e9;    // p[x] 表示排列的第x个数（第x个节点）的编号
bool g[11][11];     // g[x][y] 表示初始的图中x和y之间是否有一条边
bool vis[11];

// 返回：新建cnt条边的情况下，操作次数
int cal(int cnt) {
//    cout << "cal cnt = " << cnt << endl;
    return cnt + (m + cnt - n);
}

// 当前这个环的开头的节点是第y个节点，正在选择排列的第x个节点
void dfs(int y, int x, int cnt) {   // 在之前已经新建了多少条边 g[a][b]=false, a--b
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            p[x] = i;
            if (x == n) {
                if (x - y >= 2) {
                    int tmp = cnt;
                    if (!g[ p[x-1] ][ p[x] ])
                        tmp++;
                    if (!g[ p[y] ][ p[x] ])
                        tmp++;
                    ans = min(ans, cal(tmp));
                }
                return;
            }
            // 回溯：标记
            vis[i] = true;
            int tmp = cnt;
            if (y < x) {
                // p[x-1] -- p[x]
                if (!g[ p[x-1] ][ p[x] ])
                    tmp++;
            }
            dfs(y, x+1, tmp);
            if (x - y >= 2) {
                if (!g[ p[y] ][ p[x] ])
                    tmp++;
                dfs(x+1, x+1, tmp);
            }
            vis[i] = false; // 撤销标记
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        g[u][v] = g[v][u] = true;
    }
    dfs(1, 1, 0);
    cout << ans << endl;
    return 0;
}
