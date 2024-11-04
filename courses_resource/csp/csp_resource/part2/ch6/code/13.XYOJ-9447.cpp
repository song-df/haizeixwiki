#include <bits/stdc++.h>
using namespace std;

int n, a[55], m;

int main() {
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n > 0) {
        a[++m] = n % 2;
        n /= 2;
    }
    // a[1..m]
    for (int i = m; i >= 1; i--)
        cout << a[i];
    return 0;
}
