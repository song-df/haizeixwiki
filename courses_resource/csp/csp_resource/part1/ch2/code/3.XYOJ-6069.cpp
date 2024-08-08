#include <bits/stdc++.h>
using namespace std;
int cnt[4], n, a;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a <= 18)
            cnt[0]++;
        else if (a <= 35)
            cnt[1]++;
        else if (a <= 60)
            cnt[2]++;
        else
            cnt[3]++;
    }
    for (int i = 0; i < 4; i++)
        printf("%.2lf%\n", cnt[i] * 100.0 / n);
    return 0;
}
