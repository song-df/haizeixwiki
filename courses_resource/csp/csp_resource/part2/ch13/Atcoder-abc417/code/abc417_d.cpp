#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 5, M = 1000;

int n, Q, p[maxn], a[maxn], b[maxn], sum[maxn], f[maxn][M+1];

void init() {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j <= M; j++) {
            int k = (p[i] >= j) ? (j + a[i]) : max(0, j - b[i]);
            if (i == n)
                f[i][j] = k;
            else
                f[i][j] = f[i+1][k];
        }
    }
}

int cal(int x) {
    if (x <= M)
        return f[1][x];
    if (x - sum[n] > M)
        return x - sum[n];
    int p = lower_bound(sum+1, sum+n+1, x - M) - sum;
    // p == n
    if (p == n)
        return x - sum[n];
    x -= sum[p];
    return f[p+1][x];
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d%d", p+i, a+i, b+i);
        sum[i] = sum[i-1] + b[i];
    }
    init();
    scanf("%d", &Q);
    while (Q--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", cal(x));
    }
    return 0;
}
