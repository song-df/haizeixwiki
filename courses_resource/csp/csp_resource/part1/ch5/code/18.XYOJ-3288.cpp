#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int n, a[maxn];

int cal() {
    int p = 1;
    while (p < n && a[p] <= a[p+1])
        p++;
    if (p == n)
        return 0;
    // a[1] <= a[2] <= .. <= a[p]
    // a[p+1] <= a[p+2] <= ... <= a[n]
    for (int i = p+1; i < n; i++)
        if (a[i] > a[i+1])
            return -1;
    if (a[n] > a[1])
        return -1;
    return n - p;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << cal() << endl;
    return 0;
}
