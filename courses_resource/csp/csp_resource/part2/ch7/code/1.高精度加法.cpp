#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

char s[maxn], t[maxn];
int n, m, a[maxn], b[maxn], c[maxn];

int main() {
    cin >> s >> t;
    n = strlen(s);
    m = strlen(t);
    for (int i = 0; i < n; i++) a[i] = s[n-1-i] - '0';
    for (int i = 0; i < m; i++) b[i] = t[m-1-i] - '0';

//    cout << "a 的位数 = " << n << endl;
//    for (int i = n-1; i >= 0; i--) cout << a[i] << ",";
//    cout << endl;
//    cout << "b 的位数 = " << m << endl;
//    for (int i = m-1; i >= 0; i--) cout << b[i] << ",";
//    cout << endl;

    // 进位
    for (int i = 0; i <= max(n,m)-1; i++) {
        c[i] += a[i] + b[i];
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
    // 找最高位然后（从最高位第p位）输出（到最低位第0位）
    int p = max(n, m);
    if (!c[p]) p--;
    for (int i = p; i >= 0; i--)
        cout << c[i];
    cout << endl;

    return 0;
}
