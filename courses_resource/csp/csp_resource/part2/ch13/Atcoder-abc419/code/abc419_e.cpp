#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

int n, m, L, a[maxn], f[maxn][maxn], dp[maxn][maxn];

int main() {
    cin >> n >> m >> L;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // 求 f[i][j]
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < m; j++) {
            // 求将 a[i] % m == j 所需的最少代价
            int cost = (j - a[i] + m) % m;
            f[i][j] = f[i+L][j] + cost;
        }
    }
    // 求 dp[i][j] a[i], a[i+L], a[i+2L], a[i+3L], ...
    // 令 (a[1]+a[2]+...+a[i]) % m == j
    memset(dp, 0x3f, sizeof dp);
    for (int i = 1; i <= L; i++) {
        for (int j = 0; j < m; j++) { // 令 a[i]%m=j
            if (i == 1)
                dp[i][j] = f[i][j];
            else {
                for (int k = 0; k < m; k++)
                    dp[i][(k+j)%m] = min(dp[i][(k+j)%m], dp[i-1][k] + f[i][j]);
            }
        }
    }
    cout << dp[L][0] << endl;
    return 0;
}