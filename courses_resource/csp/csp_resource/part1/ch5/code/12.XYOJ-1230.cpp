#include <bits/stdc++.h>
using namespace std;
int n, a[1005];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++) {
        int p = i;
        while (p > 1 && a[p-1] > a[i])
            p--;
        int t = a[i];
        for (int j = i; j >= p+1; j--)
            a[j] = a[j-1];
        a[p] = t;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}
