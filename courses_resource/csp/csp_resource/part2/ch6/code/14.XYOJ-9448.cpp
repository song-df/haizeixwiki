#include <bits/stdc++.h>
using namespace std;

char t(int a) {
    if (a <= 9)
        return '0' + a;
    return 'A' + a - 10;
}

int n, a[22], m;

int main() {
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n > 0) {
        a[++m] = n % 16;
        n /= 16;
    }
    // a[1..m]
    for (int i = m; i >= 1; i--)
        cout << t(a[i]);
    return 0;
}

