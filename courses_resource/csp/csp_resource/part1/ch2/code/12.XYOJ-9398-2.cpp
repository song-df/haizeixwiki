#include <bits/stdc++.h>
using namespace std;
int n, a[1005], ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1, cnt; i <= n; i++) {
        if (i == 1 || a[i] != a[i-1])
            cnt = 1;
        else    // i > 1 ÇÐ a[i-1] == a[i]
            cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
