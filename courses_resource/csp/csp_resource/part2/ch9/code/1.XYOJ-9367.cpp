#include <bits/stdc++.h>
using namespace std;
int n, f[505]; // f[0] = 1

int main() {
    cin >> n;
    f[1] = 2;
    for (int i = 2; i <= n; i++)
        f[i] = f[i-1] + 2 * (i-1); // 递推公式
    cout << f[n] << endl; // n个封闭曲线得到的平面数
    return 0;
}

