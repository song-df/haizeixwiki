#include <bits/stdc++.h>
using namespace std;
int X, n, x, a[505], cnt;

int main() {
    cin >> X;
    while (cin >> x)
        a[++n] = x;
    for (int i = 1, j; i <= n; i = j, cnt++) {
        int sum = 0;
        j = i;
        while (j <= n && sum + a[j] <= X) {
            sum += a[j];
            j++;
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++)
        printf("%.1lf ", a[i] * 1.2);
    return 0;
}
