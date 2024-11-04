#include <bits/stdc++.h>
using namespace std;

int k, n, L, R;

int main() {
    cin >> n >> L >> R;
    k = L / n * n + n - 1;
    if (k <= R)
        cout << n - 1 << endl;
    else
        cout << R % n << endl;
    return 0;
}
