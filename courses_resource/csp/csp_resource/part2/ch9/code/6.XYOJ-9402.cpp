#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
const long long mod = 1e9 + 7;

int n, k;
long long f[maxn] = {1};

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = max(0, i-k); j < i; j++)
            f[i] = (f[i] + f[j]) % mod;
    cout << f[n] << endl;
    return 0;
}
