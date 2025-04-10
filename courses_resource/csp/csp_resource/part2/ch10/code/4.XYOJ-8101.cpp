#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

int n, x, a[maxn];
long long ans;

int main() {
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    if (a[1] > x) {
        ans = a[1] - x;
        a[1] = x;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] + a[i+1] > x) {
            int tmp = a[i] + a[i+1] - x;
            a[i+1] -= tmp;
            ans += tmp;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
