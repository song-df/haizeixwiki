#include <bits/stdc++.h>
using namespace std;

int n, x[15], y[15], ans;
bool vis[15];

// (x1,y1) -> (x2,y2) 方向
int f(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 < y2) return 0; // 上
    if (x1 == x2 && y1 > y2) return 1;  // 下
    if (y1 == y2 && x1 > x2) return 2;  // 左
    if (y1 == y2 && x1 < x2) return 3;  // 右
    return -1;
}

// 上一个点坐标 (xx,yy) 目前正在选第d个点，c上上个点移动到(xx,yy)的方向
void dfs(int xx, int yy, int d, int c) {
    if (d > n) { // d == n+1 (1~d)
        int cc = f(xx, yy, 0, 0);
        if (cc != -1 && cc != c)
            ans++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        int cc = f(xx, yy, x[i], y[i]);
        if (!vis[i] && cc != -1 && cc != c) {
            vis[i] = true;
            dfs(x[i], y[i], d+1, cc);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    dfs(0, 0, 1, -1);
    cout << ans << endl;
    return 0;
}

