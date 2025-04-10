#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

int n;
long long f[maxn];

int main() {
    cin >> n;
    f[1] = 1;
    for (long long i = 2; i <= n; i++) {
        if (i % 2 == 0)
            f[i] = f[i-1] + (i+1)*i/2 + i*i/4;
        else
            f[i] = f[i-1] + (i+1)*i/2 + (i+1)*(i-1)/4;
    }
    cout << f[n] << endl;
    return 0;
}
