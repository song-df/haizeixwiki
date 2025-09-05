#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int n, r, c, r1 = 1e9, rn, c1 = 1e9, cn;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &r, &c);
        r1 = min(r1, r);
        rn = max(rn, r);
        c1 = min(c1, c);
        cn = max(cn, c);
    }
    printf("%d\n", max((rn-r1+1)/2, (cn-c1+1)/2));
    return 0;
}
