#include <bits/stdc++.h>
using namespace std;
const int maxn = 3005;

int n, q, x[maxn], y[maxn], f[maxn];

struct Node {
    int a, b, w;

    bool operator < (const Node &b) const {
        return w > b.w;
    }
};
priority_queue<Node> que;

void init() {
    for (int i = 1; i <= n; i++)
        f[i] = i;
}

int find(int x) {
    return x == f[x] ? x : f[x] = find(f[x]);
}

void funion(int x, int y) {
    int a = find(x), b = find(y);
    f[a] = f[b] = min(a, b);
}

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", x+i, y+i);
    init();
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            que.push({ i, j, abs(x[i] - x[j]) + abs(y[i] - y[j]) });
    while (q--) {
        int op, a, b;
        scanf("%d", &op);
        if (op == 2) {
            int k = -1;
            while (!que.empty() && (k == -1 || k == que.top().w) ) {
                Node u = que.top();
                que.pop();
                if (find(u.a) != find(u.b)) {
                    funion(u.a, u.b);
                    if (k == -1)
                        k = u.w;
                }
            }
            printf("%d\n", k);
        }
        else {
            scanf("%d%d", &a, &b);
            if (op == 1) {
                n++;
                f[n] = n;
                x[n] = a;
                y[n] = b;
                for (int i = 1; i < n; i++)
                    que.push({ i, n, abs(x[i] - x[n]) + abs(y[i] - y[n]) });
            }
            else { // op == 3
                puts(find(a) == find(b) ? "Yes" : "No");
            }
        }
    }
    return 0;
}
