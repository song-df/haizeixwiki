#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int cnt[maxn], n, a, Fmax;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        cnt[a]++;   // cnt[a]：a出现的次数
        Fmax = max(Fmax, a);
    }
    for (int i = 0; i <= Fmax; i++)
        cout << cnt[i] << endl;
    return 0;
}
