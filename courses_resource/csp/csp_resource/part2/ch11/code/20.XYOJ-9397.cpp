#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
bool vis[26];
char s[22][22];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y, int step) {
    ans = max(ans, step);
    vis[ s[x][y] - 'A' ] = true;
    for (int i = 0; i < 4; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (in_map(xx, yy) && !vis[ s[xx][yy] - 'A' ])
            dfs(xx, yy, step+1);
    }
    vis[ s[x][y] - 'A' ] = false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    dfs(0, 0, 1);
    cout << ans << endl;
    return 0;
}
