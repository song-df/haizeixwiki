#include <bits/stdc++.h>
using namespace std;
int l, w, h, m, a[55][55][55], ans;
bool vis[55][55][55];
int dir[6][3] = {
    -1, 0, 0,
    1, 0, 0,
    0, -1, 0,
    0, 1, 0,
    0, 0, -1,
    0, 0, 1
};

bool in_map(int x, int y, int z) {
    return x>=1 && x<=l && y>=1 && y<=w && z>=1 && z<=h;
}

void dfs(int x, int y, int z) {
    vis[x][y][z] = true;
    for (int i = 0; i < 6; i++) {
        int xx = x + dir[i][0], yy = y + dir[i][1], zz = z + dir[i][2];
        if (in_map(xx, yy, zz) && !vis[xx][yy][zz] && abs(a[x][y][z]-a[xx][yy][zz]) <= m)
            dfs(xx, yy, zz);
    }
}

int main() {
    cin >> l >> w >> h >> m;
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= w; j++)
            for (int k = 1; k <= h; k++)
                cin >> a[i][j][k];
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= w; j++)
            for (int k = 1; k <= h; k++)
                if (!vis[i][j][k])
                    ans++, dfs(i, j, k);
    cout << ans << endl;
    return 0;
}














