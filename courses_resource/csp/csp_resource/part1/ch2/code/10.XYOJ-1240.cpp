#include <bits/stdc++.h>
using namespace std;
int n, h[1005], ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1; i <= n; i++) {
        int p = i, q = i;
        while (p > 1 && h[p-1] <= h[p])
            p--;
        while (q < n && h[q+1] <= h[q])
            q++;
        ans = max(ans, q - p + 1);
    }
    cout << ans << endl;
    return 0;
}
