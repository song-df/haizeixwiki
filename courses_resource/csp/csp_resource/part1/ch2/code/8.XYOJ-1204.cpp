#include <bits/stdc++.h>
using namespace std;
int n, a, b[1005], m;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (m == 0 || b[m] == a)
            b[++m] = a;
        else    // b[m] != a
            m--;
    }
    cout << b[1] << endl;
    return 0;
}
