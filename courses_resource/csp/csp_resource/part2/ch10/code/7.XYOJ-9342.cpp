#include <bits/stdc++.h>
using namespace std;

int n;
double v, t, ans;

int main() {
    while (cin >> n && n) {
        ans = 1e9;
        for (int i = 1; i <= n; i++) {
            cin >> v >> t;
            v /= 3.6; // km/h -> m/s
            if (t >= 0)
                ans = min(ans, 4500 / v + t);
        }
        printf("%.0lf\n", ceil(ans));
//        printf("%.0lf\n", ans + 0.5);
    }
    return 0;
}

