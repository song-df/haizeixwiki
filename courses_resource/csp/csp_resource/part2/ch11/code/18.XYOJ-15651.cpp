#include <bits/stdc++.h>
using namespace std;
const int maxn = 505, inf = 1e9;

struct Node {
    int x, y, z; // x行，y列，z方向
};

int n, m, dis[maxn][maxn][4], sx, sy, ex, ey;
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
char s[maxn][maxn];

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs() {
    memset(dis, -1, sizeof dis);
    queue<Node> que;
    for (int i = 0; i < 4; i++) {
        que.push({sx, sy, i});
        dis[sx][sy][i] = 0;
    }
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
//        printf("(%d , %d , %d) .. %d\n", u.x, u.y, u.z, dis[u.x][u.y][u.z]);
        int x = u.x, y = u.y, z = u.z;
        while (in_map(x+dir[z][0], y+dir[z][1]) && s[ x+dir[z][0] ][ y+dir[z][1] ] != '1') {
            x += dir[z][0];
            y += dir[z][1];
        }
        for (int i = 0; i < 4; i++) {
            if (dis[x][y][i] == -1) {
                dis[x][y][i] = dis[u.x][u.y][u.z] + 1;
                que.push({x, y, i});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cin >> sx >> sy >> ex >> ey;
    sx--, sy--, ex--, ey--;
    bfs();
    int ans = inf;
    for (int x = ex+1; x < n && s[x][ey] != '1'; x++)
        if (dis[x][ey][0] != -1)
            ans = min(ans, dis[x][ey][0] + 1);
    for (int x = ex-1; x >= 0 && s[x][ey] != '1'; x--)
        if (dis[x][ey][1] != -1)
            ans = min(ans, dis[x][ey][1] + 1);
    for (int y = ey+1; y < m && s[ex][y] != '1'; y++)
        if (dis[ex][y][2] != -1)
            ans = min(ans, dis[ex][y][2] + 1);
    for (int y = ey-1; y >= 0 && s[ex][y] != '1'; y--)
        if (dis[ex][y][3] != -1)
            ans = min(ans, dis[ex][y][3] + 1);
    if (ans == inf)
        cout << "No!God!Please no!" << endl;
    else
        cout << ans << endl;
    return 0;
}
