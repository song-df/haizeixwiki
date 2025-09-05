#include <bits/stdc++.h>
using namespace std;

int n;
long double ans;
char s[110];

int main() {
    cin >> s;
    n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] != 't')
            continue;
        int x = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == 't') {
                x++;
                int t = j - i + 1;
                if (t >= 3) {
                    long double tmp = (long double)(x - 2) / (t - 2);
                    ans = max(ans, tmp);
                }
            }
        }
    }
    printf("%.12Lf\n", ans);
    return 0;
}
