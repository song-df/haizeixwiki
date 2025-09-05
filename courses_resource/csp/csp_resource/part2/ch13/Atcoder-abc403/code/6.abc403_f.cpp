#include <bits/stdc++.h>
using namespace std;
const int maxn = 2020;

int n, f[maxn][2];
string s[maxn][2];

bool check(int n) {
    for (; n; n /= 10)
        if (n % 10 != 1)
            return false;
    return true;
}

int dfs(int n, int x) { // x=0 + ; x=1 *
    if (f[n][x])
        return f[n][x];
    if (check(n)) {
        s[n][x] = to_string(n);
        return f[n][x] = s[n][x].size();
    }
    f[n][x] = 1e9;
    if (!x) { // +      // dfs(i, y) + dfs(n-i, z)
        for (int i = 1; i <= n/2; i++) {
            for (int y = 0; y < 2; y++) {
                for (int z = 0; z < 2; z++) {
                    int tmp = dfs(i, y) + dfs(n-i, z) + 1;
                    if (tmp < f[n][x]) {
                        f[n][x] = tmp;
                        s[n][x] = s[i][y] + "+" + s[n-i][z];
                    }
                }
            }
        }
    }
    else {  // *
        for (int i = 2; i * i <= n; i++) {
            if (n % i)
                continue;
            for (int y = 0; y < 2; y++) {
                for (int z = 0; z < 2; z++) {
                    int tmp = dfs(i, y) + dfs(n/i, z) + (1 - y) * 2 + (1 - z) * 2 + 1;
                    if (tmp < f[n][x]) {
                        f[n][x] = tmp;
                        string s1 = s[i][y], s2 = s[n/i][z];
                        if (!y) s1 = "(" + s1 + ")";
                        if (!z) s2 = "(" + s2 + ")";
                        s[n][x] = s1 + "*" + s2;
                    }
                }
            }
        }
    }
    return f[n][x];
}

int main() {
    cin >> n;
    if (dfs(n, 0) < dfs(n, 1))
        cout << s[n][0] << endl;
    else
        cout << s[n][1] << endl;
    return 0;
}

