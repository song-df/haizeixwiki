#include <bits/stdc++.h>
using namespace std;

int n, m, a[105], b; // ÓÃ b ±íÊ¾ b[i]

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++) {
        cin >> b; // b[i]
        for (int j = 1; j <= n; j++) {
            if (a[j] == b) {
                a[j] = -1;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (a[i] != -1)
            cout << a[i] << " ";
    return 0;
}

