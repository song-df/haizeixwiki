#include <bits/stdc++.h>
using namespace std;

int n, a[22], cnt;
bool vis[1010];

// 已经处理了 a[1..d-1] 有没有选，现在正在考虑 a[d] 选不选
void dfs(int d, int sum) {
    if (d > n) {
        vis[sum] = true;
        return;
    }
    // a[d]选
    dfs(d+1, sum + a[d]);
    // a[d]不选
    dfs(d+1, sum);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1, 0);
    // 0 ~ 1000
    for (int i = 1; i <= 1000; i++)
        if (vis[i])
            cnt++;
    cout << cnt << endl;
    return 0;
}
