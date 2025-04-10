#include <bits/stdc++.h>
using namespace std;
// lower_bound >=x upper_bound >x
const int maxn = 2e5 + 5;

int n, a[maxn], q, op, x;

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", a+i);
    sort(a, a+n);
    while (q--) {
        scanf("%d%d", &op, &x);
        int p;
        if (op == 1)
            p = lower_bound(a, a+n, x) - a;
        else
            p = upper_bound(a, a+n, x) - a;
        if (p == n)
            puts("-1");
        else
            printf("%d\n", a[p]);
    }
    return 0;
}
