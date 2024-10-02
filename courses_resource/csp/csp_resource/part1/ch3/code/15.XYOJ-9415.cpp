#include <bits/stdc++.h>
using namespace std;
char s[1005], a[1005];
int c[1005], m;

int main() {
    cin >> s;
    m = c[1] = 1;
    a[1] = s[0];
    for (int i = 1; s[i]; i++) {
        if (s[i] == s[i-1])
            c[m]++;
        else {
            a[++m] = s[i];
            c[m] = 1;
        }
    }
    for (int i = 1; i <= m; i++)
        cout << c[i] << a[i];
    return 0;
}
