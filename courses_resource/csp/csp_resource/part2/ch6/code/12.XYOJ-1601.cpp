#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int n = 3000; n >= 2; n--) {
        int tmp = m - n * (n - 1) / 2;
        if (tmp < 0 || tmp % n)
            continue;
        int a = tmp / n;
        // a, a+n-1
        cout << a << " " << a + n - 1 << endl;
    }
    return 0;
}
