#include <bits/stdc++.h>
using namespace std;

int n, m, ans = -1;
char s[11][11];
bool vis[11][11];
int dir[4][2] = { -1, 0, 1, 0, 0, -1, 0, 1 };

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

// s[x][y] 对应的宝藏的价值
int f(int x, int y) {
    if (isdigit(s[x][y]))
        return s[x][y] - '0';
    // s[x][y] == '*' or '#'
    return 0;
}

void dfs(int x, int y, int val, bool flag) {
    if (x == n-1 && y == m-1) {
        ans = max(ans, val);
        return;
    }
    vis[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (in_map(xx, yy) && !vis[xx][yy]) {
            if (flag && s[xx][yy] == '#')
                continue;
            dfs(xx, yy, val + f(xx, yy), flag || (s[xx][yy]=='#'));
        }
    }
    vis[x][y] = false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    dfs(0, 0, f(0, 0), false);
    cout << ans << endl;
    return 0;
}

