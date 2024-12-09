#include <bits/stdc++.h>
using namespace std;
const int maxn = 10010;

int n, b[maxn], cnt, a[maxn] = {1}, p;

void f(int x) { // 将 a 更新为 a * x 的结果
    for (int i = 0; i <= p; i++)
        a[i] *= x;
    for (int i = 0; i < p+3; i++)
        a[i+1] += a[i] / 10,
        a[i] %= 10;
    p += 3;
    while (!a[p]) p--;
}

int main() {
    cin >> n;
    for (int i = 2; n >= i; i++) {
        b[++cnt] = i;
        n -= i;
    }
    // b[1..cnt] = [2..cnt+1]
    for (int i = cnt; i >= 1 && n; i--) {
        b[i]++;
        n--;
    }
    if (n) b[cnt]++;
    for (int i = 1; i <= cnt; i++)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 1; i <= cnt; i++)
        f(b[i]);
    for (int i = p; i >= 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}
