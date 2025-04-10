#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;

int n, a;
long long ans;

// q1 ×ÔÓÉ£»q2 Âô³ö
priority_queue<int, vector<int>, greater<int>> q1, q2;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        int x = 1e9, y = 1e9;
        if (!q1.empty())
            x = q1.top();   // a-x
        if (!q2.empty())
            y = q2.top();   // a-y
        if (a <= min(x, y))
            q1.push(a);
        else if (x < y) {
            // xÂò£¬aÂô
            q1.pop();
            ans += a - x;
            q2.push(a);
        }
        else {  // x >= y
            q2.pop();
            ans += a - y;
            q2.push(a);
            q1.push(y);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
