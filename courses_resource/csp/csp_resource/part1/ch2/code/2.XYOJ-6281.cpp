#include <bits/stdc++.h>
using namespace std;
int n, p = 1, q = 1;
double a[305], sum, avg, x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > a[p])
            p = i;
        if (a[i] < a[q])
            q = i;
    }
    avg = (sum - a[p] - a[q]) / (n - 2);
    for (int i = 1; i <= n; i++) {
        if (i == p || i == q)
            continue;
        x = max(x, abs(a[i] - avg));
    }
    printf("%.2lf %.2lf\n", avg, x);
    return 0;
}
