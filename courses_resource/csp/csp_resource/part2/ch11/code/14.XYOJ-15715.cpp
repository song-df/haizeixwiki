#include <bits/stdc++.h>
using namespace std;

int T, n, m, a[15];
long long ans;

// 前d-1个数拼起来是x，现在要找第d个数
void dfs(long long x, int d) {
    if (x > 0 && x % m == 0) {
        if (ans == -1 || ans > x)
            ans = x;
        return;
    }
    if (d > 9 || ans != -1 && x >= ans)
        return;
    for (int i = 1; i <= n; i++)
        dfs(x*100+a[i], d+1);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ans = -1;
        dfs(0, 1);
        if (ans == -1)
            cout << "Are you kidding me ?????" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}

