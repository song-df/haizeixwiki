#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
const long long mod = 998244353;

long long fpow(long long a, int b) {
    long long res = 1, t = a;
    for (; b; b >>= 1) {
        if (b & 1)
            res = res * t % mod;
        t = t * t % mod;
    }
    return res;
}

long long inv(long long a) {
    return fpow(a % mod, mod-2);
}

int n, m;
long long tr[maxn<<2], lazy[maxn<<2];

void push_up(int u) {
    tr[u] = (tr[u<<1] + tr[u<<1|1]) % mod;
}

// 将节点 u 维护的区间 [l, r] 每一个数都更新为 val
void update(long long val, int l, int r, int u) {
    tr[u] = val % mod * (r - l + 1) % mod;
    lazy[u] = val;
}

void push_down(int l, int r, int u) {
    if (lazy[u] != -1) {
        int mid = (l + r) / 2;
        update(lazy[u], l, mid, u<<1);
        update(lazy[u], mid+1, r, u<<1|1);
        lazy[u] = -1;
    }
}

void build(int l, int r, int u) {
    lazy[u] = -1;
    if (l == r) {
        scanf("%lld", &tr[u]);
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, u<<1);
    build(mid+1, r, u<<1|1);
    push_up(u);
}

long long query(int L, int R, int l, int r, int u) {
    if (L <= l && r <= R)
        return tr[u];
    push_down(l, r, u);
    int mid = (l + r) / 2;
    long long res = 0;
    if (L <= mid)
        res += query(L, R, l, mid, u<<1);
    if (R > mid)
        res += query(L, R, mid+1, r, u<<1|1);
    return res % mod;
}

void update(int L, int R, long long val, int l, int r, int u) {
    if (L <= l && r <= R) {
        update(val, l, r, u);
        return;
    }
    push_down(l, r, u);
    int mid = (l + r) / 2;
    if (L <= mid)
        update(L, R, val, l, mid, u<<1);
    if (R > mid)
        update(L, R, val, mid+1, r, u<<1|1);
    push_up(u);
}

void output(int l, int r, int u) {
    if (l == r) {
        printf("%lld ", tr[u]);
        return;
    }
    push_down(l, r, u);
    int mid = (l + r) / 2;
    output(l, mid, u<<1);
    output(mid+1, r, u<<1|1);
}

int main() {
    scanf("%d%d", &n, &m);
    build(1, n, 1);
    while (m--) {
        int l, r;
        scanf("%d%d", &l, &r);
        long long val = query(l, r, 1, n, 1);
        val = val * inv(r-l+1) % mod;
        update(l, r, val, 1, n, 1);
    }
    output(1, n, 1);
    return 0;
}
