#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;

char s[maxn];
int n, m, a[maxn];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        m = strlen(s);
        for (int i = 0; i < m; i++)
            a[i] += s[m-1-i] - '0';
    }
    int p = 105;
    for (int i = 0; i < p; i++) {
        a[i+1] += a[i] / 10;
        a[i] %= 10;
    }
    while (!a[p]) p--;
    // a[p..0]
    bool flag = false;
    for (int b = 0, i = p; i >= 0; i--) {
        b = b * 10 + a[i];
        if (b / n > 0)
            flag = true;
        if (flag)
            cout << b / n;
        b %= n;
    }
    cout << endl;
    return 0;
}
