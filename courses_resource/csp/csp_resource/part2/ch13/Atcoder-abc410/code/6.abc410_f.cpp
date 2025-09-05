#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 5;

int T, n, m, A[maxn], sum[maxn], cnt[maxn*2];  // cnt[x + maxn] 对应存在多少个 sum[j] == x
string s[maxn];
char ch[maxn];
vector<int> a[maxn];

long long cal() {
    long long ans = 0;
    for (int l = 1; l <= n; l++) {
        fill(A+1, A+m+1, 0);
        for (int r = l; r <= n; r++) {
            for (int i = 1; i <= m; i++)
                A[i] += a[r][i];
            cnt[0 + maxn] = 1;
            for (int i = 1; i <= m; i++) {
                sum[i] = sum[i-1] + A[i];
                ans += cnt[ sum[i] + maxn ];
                cnt[ sum[i] + maxn ]++;
            }
            for (int i = 0; i <= m; i++)
                cnt[ sum[i] + maxn ] = 0;
        }
    }
    return ans;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++) {
            scanf("%s", ch);
            s[i] = " ";
            s[i] += ch;
        }
        if (n <= m) {
            for (int i = 1; i <= n; i++) {
                a[i].resize(m+1);
                a[i][0] = 0;
                for (int j = 1; j <= m; j++)
                    a[i][j] = (s[i][j] == '#') ? 1 : -1;
            }
        }
        else {
            swap(n, m);
            for (int i = 1; i <= n; i++) {
                a[i].resize(m+1);
                a[i][0] = 0;
                for (int j = 1; j <= m; j++)
                    a[i][j] = (s[j][i] == '#') ? 1 : -1;
            }
        }
        long long ans = cal();
        printf("%lld\n", ans);
    }
    return 0;
}
