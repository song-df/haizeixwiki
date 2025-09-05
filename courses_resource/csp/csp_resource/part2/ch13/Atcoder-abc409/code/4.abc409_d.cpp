#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

int T, n;
char s[maxn];

void solve() {
    int step = 1;   // step == 1 ȡ��һ���ַ���step == 2 �ŵ����λ�ã�step == 3
    char c;
    for (int i = 0; i < n; i++) {
        if (step == 1 && i+1 < n && s[i] > s[i+1]) {
            c = s[i];
            step = 2;
        }
        else if (step == 2 && c < s[i]) {
            putchar(c);
            putchar(s[i]);
            step = 3;
        }
        else
            putchar(s[i]);
    }
    if (step == 2)
        putchar(c);
    puts("");
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d%s", &n, s);
        solve();
    }
    return 0;
}
