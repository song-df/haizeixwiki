#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int n, m;
vector<long long> a[maxn], f[maxn];
long long p[maxn*2];

bool check(long long K) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            long long tmp = a[i][j] - p[i+j-1];
            if (i == 1 && j == 1) {
                f[i][j] = K + tmp;
            }
            else if (i == 1) { // (i,j-1) -> (i,j)
                if (f[i][j-1] >= 0)
                    f[i][j] = f[i][j-1] + tmp;
                else
                    f[i][j] = -1;
            }
            else if (j == 1) {  // (i-1,j) -> (i,j)
                if (f[i-1][j] >= 0)
                    f[i][j] = f[i-1][j] + tmp;
                else
                    f[i][j] = -1;
            }
            else {  // (i,j-1) (i-1,j)
                if (f[i][j-1] >= 0 || f[i-1][j] >= 0)
                    f[i][j] = max(f[i][j-1], f[i-1][j]) + tmp;
//                else if (f[i][j-1] >= 0) // f[i-1][j] < 0
//                    f[i][j] = f[i][j-1] + tmp;
//                else if (f[i-1][j] >= 0) // f[i][j-1] < 0
//                    f[i][j] = f[i-1][j] + tmp;
                else
                    f[i][j] = -1;
            }
        }
    }
    return f[n][m] >= 0;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i <= n; i++) {
        a[i].resize(m+1);
        f[i].resize(m+1);
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%lld", &a[i][j]);
    for (int i = 1; i <= n+m-1; i++)
        scanf("%lld", p+i);
    long long l = 0, r = (n+m-1) * 1e9, res;
    while (l <= r) {    // [l, r]
        long long mid = (l + r) / 2;
        if (check(mid))
            res = mid, r = mid - 1;
        else
            l = mid + 1;
    }
    printf("%lld\n", res);
    return 0;
}
