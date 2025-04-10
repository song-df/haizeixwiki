#include <bits/stdc++.h>
using namespace std;

long long a[5], ans = 1e18;
char op[5];
bool vis[5];

void dfs(int d) {
    if (d == 4) {
        for (int i = 1; i <= 4; i++)
            if (!vis[i])
                ans = min(ans, a[i]);
        return;
    }
    for (int i = 1; i < 4; i++) {
        if (vis[i]) continue;
        for (int j = i+1; j <= 4; j++) {
            if (vis[j]) continue;
            // ÐÞ¸Ä
            vis[j] = true;
            long long tmp = a[i];
            if (op[d] == '*')
                a[i] *= a[j];
            else
                a[i] += a[j];
            dfs(d+1);
            // ³·ÏúÐÞ¸Ä
            a[i] = tmp;
            vis[j] = false;
        }
    }
}

int main() {
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> op[1] >> op[2] >> op[3];
    dfs(1);
    cout << ans << endl;
    return 0;
}
