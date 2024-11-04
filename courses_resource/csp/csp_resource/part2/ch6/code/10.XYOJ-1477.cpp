#include <bits/stdc++.h>
using namespace std;
bool vis[10005];
int L, M, l, r, ans;

int main() {
    cin >> L >> M;
    while (M--) {
        cin >> l >> r;
        for (int i = l; i <= r; i++)
            vis[i] = 1;
    }
    for (int i = 0; i <= L; i++)
        if (!vis[i])
            ans++;
    cout << ans << endl;
    return 0;
}
