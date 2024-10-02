#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

struct Haizeix {
    int a, b, c;
} a[maxn];
int n, ma, mb, mc;
bool flag;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].a >> a[i].b >> a[i].c;
        ma = max(ma, a[i].a);
        mb = max(mb, a[i].b);
        mc = max(mc, a[i].c);
    }
    for (int i = 1; i <= n; i++) {
        if (a[i].a == ma && a[i].b == mb && a[i].c == mc) {
            cout << i << " ";
            flag = true;
        }
    }
    if (!flag)
        cout << -1;
    return 0;
}
