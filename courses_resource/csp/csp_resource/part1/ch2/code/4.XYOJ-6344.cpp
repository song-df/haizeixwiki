#include <bits/stdc++.h>
using namespace std;
int n, a[105], x = -1000, sum;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x = max(x, a[i]);
    }
    for (int i = 1; i <= n; i++)
        if (a[i] != x)
            sum += a[i];
    cout << sum << endl;
    return 0;
}
