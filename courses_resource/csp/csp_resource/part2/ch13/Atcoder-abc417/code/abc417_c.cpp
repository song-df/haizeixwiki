#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int n, a[maxn], t[maxn*2];
long long ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a+i);
        int x = i - a[i];
        if (x >= 0)
            ans += t[x];
        t[ a[i]+i ]++;
    }
    printf("%lld\n", ans);
    return 0;
}
