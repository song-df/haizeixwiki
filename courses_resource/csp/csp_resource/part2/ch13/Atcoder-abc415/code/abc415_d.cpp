#include <bits/stdc++.h>
using namespace std;
const int maxm = 2e5 + 5;

int m;
long long n, ans;
struct Node {
    long long a, b;
} a[maxm];

bool cmp(Node a, Node b) {
    return a.a - a.b < b.a - b.b;
}

int main() {
    ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i].a >> a[i].b;
    sort(a+1, a+m+1, cmp);
    for (int i = 1; i <= m; i++) {
        if (n < a[i].a)
            continue;
        long long cnt = (n - a[i].b) / (a[i].a - a[i].b);
        ans += cnt;
        n -= cnt * (a[i].a - a[i].b);
    }
    cout << ans << endl;
    return 0;
}
