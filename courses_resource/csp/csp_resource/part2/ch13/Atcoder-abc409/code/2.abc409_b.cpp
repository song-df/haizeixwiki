#include <bits/stdc++.h>
using namespace std;

int n, a[105];

// 判断 >= x 的数的个数 >= x
bool check(int x) {
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] >= x)
            cnt++;
    return cnt >= x;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 0, r = 1e9, x;
    while (l <= r) {    // [l, r]
        int mid = (l + r) / 2;
        if (check(mid))
            x = mid, l = mid + 1;
        else
            r = mid - 1;
    }
    cout << x << endl;
    return 0;
}
