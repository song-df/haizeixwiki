#include <bits/stdc++.h>
using namespace std;
int a, b, n;
long long f[22][22];
bool vis[22][22]; // vis[i][j] == true : 不能传纸条 f[i][j] = 0

int main() {
    cin >> a >> b >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        vis[x][y] = true;
    }
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (vis[i][j])
                f[i][j] = 0;
            else if (i==1 && j==1)
                f[i][j] = 1; // 起点的方案数为1
            else if (i==1)
                f[i][j] = f[i][j-1];
            else if (j==1)
                f[i][j] = f[i-1][j];
            else
                f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    cout << f[a][b] << endl;
    return 0;
}
