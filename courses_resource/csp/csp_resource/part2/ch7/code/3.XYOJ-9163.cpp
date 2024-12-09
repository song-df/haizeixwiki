#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

char s[maxn];
int n, a[maxn], c[maxn];

int main() {
    cin >> s;
    n = strlen(s);
    for (int i = 0; i < n; i++) a[i] = s[n-1-i] - '0'; // a[n-1..0]
    for (int i = 0; i < n; i++)
        if (a[i])
            c[i]++, c[i+4]++;
    for (int i = 0; i <= n+3; i++) {
        c[i+1] += c[i] / 2;
        c[i] %= 2;
    }
    int p = n + 4;
    while (p > 0 && !c[p])
        p--;
    // c[p..0]
    for (int i = p; i >= 0; i--)
        cout << c[i];
    cout << endl;
    return 0;
}
