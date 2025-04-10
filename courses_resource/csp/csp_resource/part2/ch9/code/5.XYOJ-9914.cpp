#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int n, a[maxn], b[maxn], sum[maxn], ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        sum[i] = sum[i-1] + b[i];
    }
    for (int i = 1; i <= n; i++) {
        int tmp = 1e9;
        for (int j = 1; j <= i; j++)
            tmp = min(tmp, a[j] + sum[i-1] - sum[j-1]);
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}
