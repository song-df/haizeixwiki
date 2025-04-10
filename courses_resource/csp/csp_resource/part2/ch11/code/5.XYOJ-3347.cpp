#include <bits/stdc++.h>
using namespace std;

bool prime(int a) {
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

int T, s, t, dis[1010];

int bfs(int s, int t) {
    if (s > t)
        return -1;
    // dis[s..t]
    dis[s] = 0;
    fill(dis+s+1, dis+t+1, -1);
    queue<int> que;
    que.push(s);
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (int i = 2; i <= u/2; i++) {
            if (u % i == 0 && prime(i) && u + i <= t && dis[u + i] == -1) {
                dis[u + i] = dis[u] + 1;
                que.push(u + i);
            }
        }
    }
    return dis[t];
}

int main() {
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> s >> t;
        printf("Case %d: %d\n", cas, bfs(s, t));
    }
    return 0;
}

