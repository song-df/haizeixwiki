#include <bits/stdc++.h>
using namespace std;
int n, x[1005], y[1005], ans = 1;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            int dy = y[j] - y[i], dx = x[j] - x[i], cnt = 1;  // i
            for (int k = i+1; k <= n; k++)
                if (dy * (x[k] - x[i]) == dx * (y[k] - y[i]))
                    cnt++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}
