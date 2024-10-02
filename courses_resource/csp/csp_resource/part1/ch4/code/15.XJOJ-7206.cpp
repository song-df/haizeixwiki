#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

struct Class {
    int m, a[33], avg;

    void cal_avg() {
        avg = 0;
        for (int i = 1; i <= m; i++)
            avg += a[i];
        avg /= m;
    }
} c[maxn];
int n, avg;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i].m;
        for (int j = 1; j <= c[i].m; j++)
            cin >> c[i].a[j];
        c[i].cal_avg();
        avg += c[i].avg;
    }
    avg /= n;
    for (int i = 1; i <= n; i++)
        if (c[i].avg < avg)
            cout << i << " ";
    return 0;
}
