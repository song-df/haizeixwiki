#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

struct Haizeix {
    int len, a[33], b[33];
} a[maxn];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].len;
        for (int j = 1; j <= a[i].len; j++)
            cin >> a[i].a[j] >> a[i].b[j];
        for (int j = 1; j <= a[i].len; j++) {
            if (j % 2)
                cout << max(a[i].a[j], a[i].b[j]) << endl;
            else
                cout << min(a[i].a[j], a[i].b[j]) << endl;
        }
    }
    return 0;
}
