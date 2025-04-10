#include <bits/stdc++.h>
using namespace std;
int T, n, m, ans, sx, sy;
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
bool vis[22][22];
char s[22][22];

void init() {
    ans = 0;
    memset(vis, 0, sizeof vis);
}

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
    vis[x][y] = true;
    ans++;
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (in_map(xx, yy) && !vis[xx][yy] && s[xx][yy] != '#')
            dfs(xx, yy);
    }
}

int main() {
    cin >> T;
    while (T--) {
        init();
        cin >> m >> n;
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (s[i][j] == '@')
                    sx = i, sy = j;
        dfs(sx, sy);
        cout << ans << endl;
    }
    return 0;
}
