#include <bits/stdc++.h>
using namespace std;
const int mod = 12345; // 1e9+7 998244353

int n, f[1010];

int main() {
    cin >> n;
    f[1] = 1;
    f[2] = 3;
    for (int i = 3; i <= n; i++)
        f[i] = (2 * f[i-2] + f[i-1]) % mod;
    cout << f[n] << endl;
    return 0;
}
