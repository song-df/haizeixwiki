#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

char s[maxn], t[maxn];
int n, m, a[maxn], b[maxn], c[maxn*2];

int main() {
    cin >> s >> t;
    n = strlen(s);
    m = strlen(t);
    for (int i = 0; i < n; i++) a[i] = s[n-1-i] - '0';
    for (int i = 0; i < m; i++) b[i] = t[m-1-i] - '0';
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            c[i+j] += a[i] * b[j];
    for (int i = 0; i < n+m; i++) {
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
    int p = n + m - 1;
    while (p > 0 && !c[p])
        p--;
    // c[p..0]
    for (int i = p; i >= 0; i--)
        cout << c[i];
    cout << endl;
    return 0;
}
