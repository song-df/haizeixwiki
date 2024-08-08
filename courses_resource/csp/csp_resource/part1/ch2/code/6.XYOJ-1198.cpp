#include <bits/stdc++.h>
using namespace std;
int n, m, a[105], b[105], x, y; // x: a[1..n]最大值；y: b[1..m]最大值

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x = max(x, a[i]);
    }
    for (int j = 1; j <= m; j++) {
        cin >> b[j];
        y = max(y, b[j]);
    }
    cout << x + y << endl;
    return 0;
}
