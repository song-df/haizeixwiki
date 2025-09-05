#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int T, n, a[maxn];

bool cmp(int a, int b) {
    return abs(a) < abs(b);
}

bool check() {
    if (n <= 2)
        return true;
    sort(a+1, a+n+1, cmp);
    if (abs(a[1]) == abs(a[n])) {
        int cnt1 = 0, cnt2 = 0; // cnt1:>0的数的个数，cnt2:<0的数的个数
        for (int i = 1; i <= n; i++)
            (a[i] > 0) ? cnt1++ : cnt2++;
        return max(cnt1, cnt2) == n || abs(cnt1 - cnt2) <= 1;
    }
    for (int i = 2; i < n; i++) {
        if (1ll * a[i-1] * a[i+1] != 1ll * a[i] * a[i])
            return false;
    }
    return true;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", a+i);
        puts(check() ? "Yes" : "No");
    }
    return 0;
}
