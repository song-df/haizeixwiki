#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 5;

int T, n, m, a[maxn], b[maxn];

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        long long sum = 0;
        for (int i = 1; i <= n; i++) scanf("%d", a+i), sum += a[i];
        for (int i = 1; i <= n; i++) scanf("%d", b+i), sum += b[i];
        sort(a+1, a+n+1);
        sort(b+1, b+n+1);
        for (int i = 1, j = n; i <= n; ) {
            if (a[i] + b[j] < m)
                i++;
            else {
                i++;
                j--;
                sum -= m;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
