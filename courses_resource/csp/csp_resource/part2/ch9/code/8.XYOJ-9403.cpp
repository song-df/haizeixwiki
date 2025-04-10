#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;
const long long mod = 1e9 + 7;

int n, D, a[maxn];
long long f[maxn], ans;

int main() {
    cin >> n >> D;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i && a[j] <= a[i]-D; j++)
            f[i] = (f[i] + f[j]) % mod;
        ans = (ans + f[i]) % mod;
    }
    cout << ans << endl;
    return 0;
}
