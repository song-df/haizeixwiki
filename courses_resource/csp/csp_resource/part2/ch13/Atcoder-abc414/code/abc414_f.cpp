#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int T, n, K, dis[maxn], cnt[maxn][22];
bool vis[maxn*2][22];

// «∞œÚ–«
struct Edge {
    int v, nxt;
} edge[maxn*2];
int ecnt, head[maxn];

struct Node {
    int id, step;
} que[maxn*41];
int st, ed; // que[st..ed-1]

void init() {
    fill(head+1, head+n+1, -1);
    ecnt = 0;
    fill(dis+2, dis+n+1, -1);
    dis[1] = 0;
    for (int i = 0; i < 2*(n-1); i++)
        for (int j = 0; j < K; j++)
            vis[i][j] = false;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < K; j++)
            cnt[i][j] = 0;
    st = ed = 0;
}

void add_edge(int u, int v) {
    edge[ecnt] = { v, head[u] }; head[u] = ecnt++;
    edge[ecnt] = { u, head[v] }; head[v] = ecnt++;
}

void bfs() {
    for (int i = head[1]; i != -1; i = edge[i].nxt) {
        int v = edge[i].v;
        vis[i][1%K] = true;
        cnt[v][1%K]++;
        que[ed++] = { i, 1 };
        if (K == 1) dis[v] = 1;
    }
    while (st != ed) {
        Node nd = que[st++];
        int id = nd.id, u = edge[id].v, step = nd.step;
        if (step % K == 0 && dis[u] == -1)
            dis[u] = step / K;
        for (int i = head[u]; i != -1; i = edge[i].nxt) {
            int v = edge[i].v;
            if (step % K && (id ^ i) == 1)
                continue;
            if (vis[i][(step+1)%K])
                continue;
            vis[i][(step+1)%K] = true;
            cnt[v][(step+1)%K]++;
            int up = ((step+1)%K) ? 3 : 2;
            if (cnt[v][(step+1)%K] < up)
                que[ed++] = { i, step+1 };
        }
    }
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &K);
        init();
        for (int i = 1, u, v; i < n; i++) {
            scanf("%d%d", &u, &v);
            add_edge(u, v);
        }
        bfs();
        for (int i = 2; i <= n; i++)
            printf("%d ", dis[i]);
        puts("");
    }
    return 0;
}
