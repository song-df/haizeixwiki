#include <bits/stdc++.h>
using namespace std;
int n, t[1005], q, l, r;

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    while (q--) {
        cin >> l >> r;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (t[i] >= l && t[i] <= r)
                cnt++;
        cout << cnt << endl;
    }
    return 0;
}
