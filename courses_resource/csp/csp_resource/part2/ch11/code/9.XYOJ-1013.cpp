#include <bits/stdc++.h>
using namespace std;

int n, a[55][55], ans = 1e9, cnt;
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

bool in_map(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n;
}

// 当前在第x行第y列，一共走了dis个格子
void dfs(int x, int y, int dis) {
    if (x == n && y == n) {
        if (dis < ans) {
            ans = dis;
            cnt = 1;
        }
        else if (dis == ans)
            cnt++;
        return;
    }
    if (dis >= ans)
        return;
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (in_map(xx, yy) && !a[xx][yy]) {
            a[xx][yy] = 1;
            dfs(xx, yy, dis+1);
            a[xx][yy] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    a[1][1] = 1;
    dfs(1, 1, 1);
    cout << cnt << endl;
    cout << ans << endl;
    return 0;
}
/**
10
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 0
1 1 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0 0
0 0 0 1 1 1 1 1 1 1
0 0 0 0 0 0 0 0 0 0
*/
// dfs + 回溯
// bfs + dp
