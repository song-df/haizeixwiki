#include <bits/stdc++.h>
using namespace std;

int n, a[22], cnt;
bool vis[1010];

// �Ѿ������� a[1..d-1] ��û��ѡ���������ڿ��� a[d] ѡ��ѡ
void dfs(int d, int sum) {
    if (d > n) {
        vis[sum] = true;
        return;
    }
    // a[d]ѡ
    dfs(d+1, sum + a[d]);
    // a[d]��ѡ
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
