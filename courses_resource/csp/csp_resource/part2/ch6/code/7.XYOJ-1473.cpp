#include <bits/stdc++.h>
using namespace std;
struct Peanut {
    int x, y, cnt;
} a[405];
int m, n, k, x, p, sum;

bool cmp(Peanut a, Peanut b) {
    return a.cnt > b.cnt;
}

int main() {
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (x > 0)
                a[++p] = {i, j, x};
        }
    }
    // a[1..p]
    sort(a+1, a+p+1, cmp);
    for (int i = 1; i <= p; i++) {
        int tmp = (i == 1) ? a[i].x : abs(a[i-1].x - a[i].x) + abs(a[i-1].y - a[i].y);
        if (tmp + 1 + a[i].x > k)
            break;
        sum += a[i].cnt;
        k -= tmp + 1;
    }
    cout << sum << endl;
    return 0;
}











