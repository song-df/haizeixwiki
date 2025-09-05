#include <bits/stdc++.h>
using namespace std;
const int maxn = 3005;

int n, m, K, dis[maxn][maxn], cnt[maxn][maxn];

struct Node {
    int x, y;
};
queue<Node> que;

int dir[4][2] = { -1, 0, 1, 0, 0, -1, 0, 1 };

bool in_map(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

int main() {
    scanf("%d%d%d", &n, &m, &K);
    memset(dis, -1, sizeof dis);
    while (K--) {
        int x, y;
        scanf("%d%d", &x, &y);
        dis[x][y] = 0;
        que.push({ x, y });
    }
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = u.x + dir[i][0], y = u.y + dir[i][1];
            if (in_map(x, y)) {
                cnt[x][y]++;
                if (cnt[x][y] == 2 && dis[x][y] == -1) {
                    dis[x][y] = dis[u.x][u.y] + 1;
                    que.push({ x, y });
                }
            }
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (dis[i][j] > 0)
                ans += dis[i][j];
    printf("%lld\n", ans);
    return 0;
}
