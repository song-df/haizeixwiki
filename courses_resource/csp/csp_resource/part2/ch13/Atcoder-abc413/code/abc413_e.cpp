#include <bits/stdc++.h>
using namespace std;

int T, n, m, a[1<<18], b[1<<18];

void dfs(int l, int r) {
    if (l >= r)
        return;
    int mid = (l + r) / 2;  // [l, mid] [mid+1, r]
    dfs(l, mid);    // P1
    dfs(mid+1, r);  // P2
    if (a[l] > a[mid+1]) {
        int k = l;
        for (int i = mid+1; i <= r; i++)
            b[k++] = a[i];
        for (int i = l; i <= mid; i++)
            b[k++] = a[i];
        for (int i = l; i <= r; i++)
            a[i] = b[i];
    }
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        m = 1 << n;
        for (int i = 0; i < m; i++)
            scanf("%d", a+i);
        // [0, m-1]
        dfs(0, m-1);
        for (int i = 0; i < m; i++)
            printf("%d ", a[i]);
        puts("");
    }
    return 0;
}
