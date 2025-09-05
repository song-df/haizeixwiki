#include <bits/stdc++.h>
using namespace std;

int n, q, x, cnt[105]; // cnt[i] 表示编号为 i 的盒子里目前球的数量

int main() {
    cin >> n >> q;
    while (q--) {
        cin >> x;
        if (!x) { // 输入 x = 0
            for (int i = 1; i <= n; i++)
                if (x == 0 || cnt[i] < cnt[x])
                    x = i;
        }
        cnt[x]++;
        cout << x << " ";
    }
    return 0;
}
