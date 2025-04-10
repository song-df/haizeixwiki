#include <bits/stdc++.h>
using namespace std;

int n, m, yu_x, yu_y, ya_x, ya_y, kfc_x, kfc_y;
char s[220][220];
int dis[220][220];

int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

bool in_map(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

struct Node { int x, y; };

void bfs() {
    queue<Node> que;
    memset(dis, -1, sizeof dis);
    dis[kfc_x][kfc_y] = 0;
    que.push({ kfc_x, kfc_y });
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = u.x + dir[i][0], y = u.y + dir[i][1];
            if (in_map(x, y) && s[x][y] != '#' && dis[x][y]==-1) {
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == '@')
                yu_x = i, yu_y = j;
            else if (s[i][j] == '&')
                ya_x = i, ya_y = j;
            else if (s[i][j] == 'F')
                kfc_x = i, kfc_y = j;
        }
    }
    bfs();
    if (dis[yu_x][yu_y]==-1 || dis[yu_x][yu_y] > 180 || dis[ya_x][ya_y]==-1 || dis[ya_x][ya_y] > 180)
        cout << "Meeting cancelled";
    else
        cout << max(dis[yu_x][yu_y], dis[ya_x][ya_y]);
    return 0;
}
