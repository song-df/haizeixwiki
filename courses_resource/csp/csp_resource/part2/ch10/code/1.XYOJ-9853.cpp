#include <bits/stdc++.h>
using namespace std;

int n, m;   // n 数字位数，m 要删除的数字有多少位
char s[110];
bool vis[110];

int main() {
    cin >> s >> m;
    n = strlen(s);
    for (int i = 0; i < n && m > 0; i++) {
        bool flag = false;
        for (int j = i+1; j <= min(i+m, n-1); j++) {
            if (s[j] < s[i]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            vis[i] = true;
            m--;
        }
    }
    if (m > 0) {
        for (int i = n-1; i >= 0 && m > 0; i--) {
            if (!vis[i]) {
                vis[i] = true;
                m--;
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (s[i] > '0')
                flag = true;
            if (flag)
                cout << s[i];
        }
    }
    if (!flag)
        cout << 0 << endl;
    return 0;
}

