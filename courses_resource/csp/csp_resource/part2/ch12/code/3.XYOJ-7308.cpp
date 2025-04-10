#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

vector<int> ship[maxn];
int n, t[maxn], k, cnt;
map<int, int> mp;   // mp[x] 表示目前国籍为 x 的人数

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", t+i, &k);
        for (int j = 0, x; j < k; j++) {
            scanf("%d", &x);
            ship[i].push_back(x);
        }
    }
    // [j..i]
    for (int i = 1, j = 1; i <= n; i++) {
        for (auto x : ship[i]) {
            mp[x]++;
            if (mp[x] == 1)
                cnt++;
        }
        while (t[j] <= t[i] - 86400) {
            for (auto x : ship[j]) {
                mp[x]--;
                if (mp[x] == 0)
                    cnt--;
            }
            j++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
