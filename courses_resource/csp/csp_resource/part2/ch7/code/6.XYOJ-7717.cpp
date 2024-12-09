#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;

char s[maxn];
int n, m;
long long a[maxn];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        m = strlen(s);
        for (int j = 0; j < m; j++)
            a[j] += s[m-1-j] - '0';
    }
    for (int i = 0; i <= 100; i++)
        a[i] *= (n-1) * (n-2) / 2;
    for (int i = 0; i+1 < maxn; i++) {
        a[i+1] += a[i] / 10;
        a[i] %= 10;
    }
    int p = maxn - 1;
    while (!a[p]) p--;
    // a[p..0]
    for (int i = p; i >= 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}
