#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;

int n, m, a[maxn];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", a+i);
    int cnt = 1, sum = a[1];
    for (int i = 2; i <= n; i++) {
        if (sum + a[i] <= m) {
            sum += a[i];
        }
        else {
            cnt++;
            sum = a[i];
        }
    }
    printf("%d\n", cnt);
    return 0;
}
