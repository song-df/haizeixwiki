#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

struct Node {
    int p, c;
} a[maxn];
int r[maxn], n, k, ans;
bool vis[maxn];

bool cmp(Node a, Node b) {
    return a.p > b.p;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].c >> a[i].p;
    sort(a+1, a+n+1, cmp);
    cin >> k;
    for (int i = 1; i <= k; i++)
        cin >> r[i];
    sort(r+1, r+k+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (r[j] >= a[i].c && !vis[j]) {
                vis[j] = true;
                ans += a[i].p;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
