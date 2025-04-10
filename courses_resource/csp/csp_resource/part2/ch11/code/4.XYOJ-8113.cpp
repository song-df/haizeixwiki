#include <bits/stdc++.h>
using namespace std;

int K, A, B, C, T, a[55][55][55], dis[55][55][55];
int dir[6][3] = {
    -1, 0, 0,
    1, 0, 0,
    0, -1, 0,
    0, 1, 0,
    0, 0, -1,
    0, 0, 1
};

bool in_map(int x, int y, int z) {
    return x >= 0 && x < A && y >= 0 && y < B && z >= 0 && z < C;
}

struct Node {
    int x, y, z;
};

int bfs() {
    queue<Node> que;
    que.push({0, 0, 0});
    memset(dis, -1, sizeof dis);
    dis[0][0][0] = 0;
    while (!que.empty()) {
        Node u = que.front();
        que.pop();
        for (int i = 0; i < 6; i++) {
            int x = u.x + dir[i][0], y = u.y + dir[i][1], z = u.z + dir[i][2];
            // (u.x, u.y, u.z) -> (x, y, z)
            if (in_map(x, y, z) && dis[x][y][z]==-1 && a[x][y][z]==0 && dis[u.x][u.y][u.z] < T) {
                dis[x][y][z] = dis[u.x][u.y][u.z] + 1;
                que.push({x, y, z});
            }
        }
    }
    return dis[A-1][B-1][C-1];
}

int main() {
    cin >> K;
    while (K--) {
        cin >> A >> B >> C >> T;
        for (int i = 0; i < A; i++)
            for (int j = 0; j < B; j++)
                for (int k = 0; k < C; k++)
                    cin >> a[i][j][k];
        cout << bfs() << endl;
    }
    return 0;
}
/**
1
3 3 4 20
0 1 1 1
0 0 1 1
0 1 1 1
1 1 1 1
1 0 0 1
0 1 1 1
0 0 0 0
0 1 1 0
0 1 1 0
*/
