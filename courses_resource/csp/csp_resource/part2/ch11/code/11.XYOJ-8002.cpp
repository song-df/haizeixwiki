#include <bits/stdc++.h>
using namespace std;

bool vis[11];
int n, cnt;

bool check(int b) {
    bool vis2[11];
    copy(vis, vis+10, vis2);
    for (int i = 0; i < 5; i++) {
        if (vis2[b%10])
            return false;
        vis2[b%10] = true;
        b /= 10;
    }
    return true;
}

void dfs(int a, int d) {
    if (d > 5) {
        if (a % n == 0 && check(a / n))
            cnt++;
        return;
    }
    for (int i = 0; i < 10; i++) {
        if (!vis[i]) {
            vis[i] = true;
            dfs(a*10+i, d+1);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n;
    dfs(0, 1);
    cout << cnt << endl;
    return 0;
}
