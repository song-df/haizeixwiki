#include <bits/stdc++.h>
using namespace std;
const int maxn = 1010;

char s[maxn], t[maxn];
int n, m, a[maxn], b[maxn], c[maxn];

int main() {
    cin >> s >> t;
    n = strlen(s);
    m = strlen(t);
    for (int i = 0; i < n; i++) a[i] = s[n-1-i] - '0';
    for (int i = 0; i < m; i++) b[i] = t[m-1-i] - '0';

//    cout << "a ��λ�� = " << n << endl;
//    for (int i = n-1; i >= 0; i--) cout << a[i] << ",";
//    cout << endl;
//    cout << "b ��λ�� = " << m << endl;
//    for (int i = m-1; i >= 0; i--) cout << b[i] << ",";
//    cout << endl;

    // ��λ
    for (int i = 0; i <= max(n,m)-1; i++) {
        c[i] += a[i] + b[i];
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }
    // �����λȻ�󣨴����λ��pλ������������λ��0λ��
    int p = max(n, m);
    if (!c[p]) p--;
    for (int i = p; i >= 0; i--)
        cout << c[i];
    cout << endl;

    return 0;
}
