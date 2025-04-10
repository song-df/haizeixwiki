#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
const long long mod = 1e9 + 7;

int n, k;
long long f[maxn] = {1}, sum[maxn] = {1};

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) { // O(n)
        if (i <= k)
            f[i] = sum[i-1];
        else
            f[i] = (sum[i-1] - sum[i-k-1] + mod) % mod;
        sum[i] = (sum[i-1] + f[i]) % mod;
    }
    cout << f[n] << endl;
    return 0;
}
