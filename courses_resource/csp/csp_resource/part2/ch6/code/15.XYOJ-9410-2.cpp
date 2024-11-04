#include <bits/stdc++.h>
using namespace std;
int n, a[33], m; // a[0..m-1] a[0] 2^0

int main() {
    cin >> n;
    if (n % 2) {
        cout << -1 << endl;
        return 0;
    }
    while (n > 0) {
        a[m++] = n % 2;
        n /= 2;
    }
    for (int i = m-1; i >= 0; i--)
        if (a[i])
            cout << (1<<i) << " ";
    return 0;
}

