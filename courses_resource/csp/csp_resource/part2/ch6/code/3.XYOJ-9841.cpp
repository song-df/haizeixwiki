#include <bits/stdc++.h>
using namespace std;
int a[10005], n, m, p = 1, ans;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++) {
        if (a[i] == 2) {
            ans += (i - p + 5) / 6;
            p = i;
        }
    }
    cout << ans << endl;
    return 0;
}
