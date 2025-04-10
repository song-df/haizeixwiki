#include <bits/stdc++.h>
using namespace std;

int n, t[105], w[105], ans;
bool vis[105];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    for (int i = 100; i >= 1; i--) { // µÚiÃë
        // t[p]>=i && w[p]×î´ó
        int p = 0;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && t[j] >= i && w[j] >= w[p])
                p = j;
        if (p) {
            ans += w[p];
            vis[p] = true;
        }
    }
    cout << ans << endl;
    return 0;
}
