#include <bits/stdc++.h>
using namespace std;
int n, m, k;

struct Student {
    int a[11], b, s, id;

    void cal() {
        for (int i = 1; i <= k; i++) {
            b += a[i];
            s += a[i] * a[i];
        }
        b /= k;
        s -= k * b * b;
        s /= k;
    }
} a[1005];

bool cmp(Student a, Student b) {
    return a.b > b.b || a.b == b.b && a.s < b.s || a.b == b.b && a.s == b.s && a.id < b.id;
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++)
            cin >> a[i].a[j];
        a[i].id = i;
        a[i].cal();
    }
    sort(a+1, a+n+1, cmp);
    for (int i = 1; i <= m; i++)
        cout << a[i].id << " ";
    return 0;
}




