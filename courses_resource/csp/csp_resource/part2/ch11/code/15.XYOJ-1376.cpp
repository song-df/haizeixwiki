#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;

int n, m, dis[maxn][maxn];
bool vis[maxn][maxn];
char s[maxn][maxn];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

struct Node { int x, y; };
Node pos[128], door[maxn][maxn];  // pos['A'] 表示第一个 'A' 出现的位置
// 如果 (x,y) 是一个传送门，door[x][y] 表示 (x,y) 对应的传送门的位置

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void init() {
    memset(pos, -1, sizeof pos);
}

void bfs() {
    memset(dis, -1, sizeof dis);
    queue<Node> que;
    que.push({0, 0});
    dis[0][0] = 0;
    vis[0][0] = true;
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = u.x + dir[i][0], y = u.y + dir[i][1];
            if (in_map(x, y) && s[x][y]!='1' && !vis[x][y]) {
                vis[x][y] = true;
                if (s[x][y] != '0') {
                    Node v = door[x][y];
                    x = v.x;
                    y = v.y;
                }
                dis[x][y] = dis[u.x][u.y] + 1;
                que.push({x, y});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    init();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = s[i][j];
            if (c != '0' && c != '1') {
                if (pos[c].x == -1)
                    pos[c] = {i, j};
                else {
                    // 同一扇传送门：pos[c] , {i, j}
                    door[i][j] = pos[c];
                    door[ pos[c].x ][ pos[c].y ] = {i, j};
                }
            }
        }
    }
    bfs();
    if (dis[n-1][m-1] == -1)
        cout << "No Solution.";
    else
        cout << dis[n-1][m-1];
    return 0;
}

