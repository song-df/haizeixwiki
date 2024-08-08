#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int x, n, a[maxn], m, b[maxn], c[maxn*2], p; // c[1..p]

int main() {
    while (cin >> x && x != -1)
        a[++n] = x;
    while (cin >> x && x != -1)
        b[++m] = x;
    int i = 1, j = 1;
    while (i <= n && j <= m) {
        if (a[i] > b[j])
            c[++p] = a[i++];
        else
            c[++p] = b[j++];
    }
    while (i <= n)
        c[++p] = a[i++];
    while (j <= m)
        c[++p] = b[j++];
    for (int i = 1; i <= p; i++)
        cout << c[i] << " ";
    return 0;
}
