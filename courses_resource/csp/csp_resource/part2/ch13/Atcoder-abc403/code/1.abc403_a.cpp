#include <bits/stdc++.h>
using namespace std;

int n, a[105], sum;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i += 2)
        sum += a[i];
    cout << sum << endl;
    return 0;
}
