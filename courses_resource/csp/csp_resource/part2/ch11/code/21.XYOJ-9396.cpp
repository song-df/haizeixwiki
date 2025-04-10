#include <bits/stdc++.h>
using namespace std;

int dis[1010];

bool prime(int a) {
    if (a < 1) return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

int T, s, t;

int bfs(int s, int t) {
    if (s > t) return -1;
    if (s == t) return 0;
    fill(dis+s+1, dis+t+1, -1);
    dis[s] = 0;
    queue<int> que;
    que.push(s);
    while (!que.empty()) {
        int n = que.front();
        que.pop();
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int v = n + i;
                if (prime(i) && v <= t && dis[v] == -1) {
                    dis[v] = dis[n] + 1;
                    que.push(v);
                }
                v = n + n / i;
                if (prime(n/i) && v <= t && dis[v] == -1) {
                    dis[v] = dis[n] + 1;
                    que.push(v);
                }
            }
        }
    }
    return dis[t];
}

int main() {
    cin >> T;
    for (int cas = 1; cas <= T; cas++) {
        cin >> s >> t;
        cout << "Case " << cas << ": " << bfs(s, t) << endl;
    }
    return 0;
}
