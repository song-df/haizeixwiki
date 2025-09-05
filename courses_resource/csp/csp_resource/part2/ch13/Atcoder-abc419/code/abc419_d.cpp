#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;

int n, m, c[maxn];
char s[maxn], t[maxn];

int main() {
    scanf("%d%d%s%s", &n, &m, s+1, t+1);
    while (m--) {
        int l, r;
        scanf("%d%d", &l, &r);
        c[l] ^= 1;
        c[r+1] ^= 1;
    }
    for (int i = 1; i <= n; i++)
        c[i] ^= c[i-1];
    for (int i = 1; i <= n; i++)
        putchar(c[i] ? t[i] : s[i]);
    return 0;
}
