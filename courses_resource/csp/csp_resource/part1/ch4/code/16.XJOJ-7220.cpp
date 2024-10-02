#include <bits/stdc++.h>
using namespace std;

struct Haizeix {
    int a[1005];
} a[1005];
int n, m, u, v;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[0].a[i];
    for (int i = 1; i <= m; i++) {
        a[i] = a[i-1];
        cin >> u >> v;
        a[i].a[u] = v;
    }
    for (int i = 1; i <= m; i++) {
        cin >> u;
        for (int j = 1; j <= n; j++)
            cout << a[u].a[j] << " ";
        cout << endl;
    }
    return 0;
}
