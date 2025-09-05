#include <bits/stdc++.h>
using namespace std;

int T, n;
char s[1<<19];
bool ok[1<<19];

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%s", &n, s+1);
        fill(ok+1, ok+(1<<n), false);
        ok[0] = true;
        // 当前状态推后续状态 u -> u^(1<<i)
        for (int u = 0; u < (1<<n)-1; u++) {
            if (!ok[u])
                continue;
            for (int i = 0; i < n; i++) {
                if ((u>>i) & 1)
                    continue;
                if (s[u^(1<<i)] == '0')
                    ok[u^(1<<i)] = true;
            }
        }
        puts(ok[(1<<n)-1] ? "Yes" : "No");
    }
    return 0;
}
