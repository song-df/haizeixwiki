#include <bits/stdc++.h>
using namespace std;
int n, m;
long long f[22][22];

int main() {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (!i || !j)
                f[i][j] = 1;
            else
                f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    cout << f[n][m] << endl;
    return 0;
}
