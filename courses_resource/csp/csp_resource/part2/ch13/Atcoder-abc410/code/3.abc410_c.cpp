#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;

int n, q, a[maxn], op, p, x, k, z;

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    while (q--) {
        scanf("%d", &op);
        if (op == 1) {
            scanf("%d%d", &p, &x);
            p--;
            p = (p + z) % n;
            a[p] = x;
        }
        else if (op == 2) {
            scanf("%d", &p);
            p--;
            p = (p + z) % n;
            printf("%d\n", a[p]);
        }
        else { // op == 3
            scanf("%d", &k);
            z = (z + k) % n;
        }
    }
    return 0;
}
