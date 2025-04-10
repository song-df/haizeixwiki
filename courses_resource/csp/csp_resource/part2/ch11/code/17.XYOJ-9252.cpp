#include <bits/stdc++.h>
using namespace std;
const int maxn = 205;

int T, n, m, dis[maxn][maxn], sx, sy, ex, ey;
char s[maxn][maxn];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

struct Node { int x, y; };

void bfs() {
    memset(dis, -1, sizeof dis);
    queue<Node> que;
    dis[sx][sy] = 0;
    que.push({sx, sy});
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = u.x + dir[i][0], y = u.y + dir[i][1];
            if (in_map(x, y) && s[x][y] != '#' && dis[x][y] == -1) {
                dis[x][y] = dis[u.x][u.y] + 1;
                que.push({x, y});
            }
        }
    }
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s[i][j] == 'S')
                    sx = i, sy = j;
                else if (s[i][j] == 'E')
                    ex = i, ey = j;
            }
        }
        bfs();
        if (dis[ex][ey] == -1)
            cout << "oop!" << endl;
        else
            cout << dis[ex][ey] << endl;
    }
    return 0;
}
