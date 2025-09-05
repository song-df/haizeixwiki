#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int T, n, s[maxn];

int cal() {
    if (s[1] * 2 >= s[n])
        return 2;
    int cnt = 2, p = 1; // s[1] ∫Õ s[n]
    // ≈≈–Ú s[2..n-1]
    sort(s+2, s+n);
    for (int i = 2; i < n; i++) {
        if (s[p] * 2 >= s[i] && s[i] * 2 >= s[n])
            return cnt + 1;
        if (i+1 < n && s[p] * 2 >= s[i+1])
            continue;
        if (s[p] * 2 >= s[i]) {
            cnt++;
            p = i;
        }
        else
            return -1;
    }
    return -1;
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", s+i);
        printf("%d\n", cal());
    }
    return 0;
}

