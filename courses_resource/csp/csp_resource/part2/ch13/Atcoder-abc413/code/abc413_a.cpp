#include <bits/stdc++.h>
using namespace std;

int n, m, a, sum;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
    }
    if (sum <= m)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
