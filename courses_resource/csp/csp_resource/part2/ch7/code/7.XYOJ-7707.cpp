#include <bits/stdc++.h>
using namespace std;
const int maxn = 5010;

int n, a[maxn][maxn], p[maxn];

void output(int x) {    // 输出第 x 个数字 fx
    for (int i = p[x]; i >= 0; i--)
        cout << a[x][i];
    cout << endl;
}

int main() {
    cin >> n;
    a[1][0] = 1;
    a[2][0] = 2;
    for (int i = 3; i <= n; i++) {
        for (int j = 0; j <= p[i-1]; j++) {
            a[i][j] += a[i-1][j] + a[i-2][j];
            a[i][j+1] += a[i][j] / 10;
            a[i][j] %= 10;
        }
        p[i] = p[i-1] + 1;
        if (!a[i][p[i]]) p[i]--;
    }
//    // test
//    for (int i = 1; i <= n; i++) {
//        cout << i << " : ";
//        output(i);
//    }
    // 输出 a[n][p[n]..0]
    output(n);
    return 0;
}
