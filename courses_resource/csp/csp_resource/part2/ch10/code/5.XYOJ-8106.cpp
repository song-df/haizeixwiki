#include <bits/stdc++.h>
using namespace std;

int n, a[55], l, r, cnt1, cnt2, sum;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> l >> r;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (a[i] > r)
            cnt1 += a[i] - r;
        else if (a[i] < l)
            cnt2 += l - a[i];
    }
    if (sum < n * l || sum > n * r)
        cout << -1 << endl;
    else
        cout << max(cnt1, cnt2) << endl;
    return 0;
}
