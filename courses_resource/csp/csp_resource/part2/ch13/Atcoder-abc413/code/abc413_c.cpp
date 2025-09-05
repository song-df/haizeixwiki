#include <bits/stdc++.h>
using namespace std;

struct Node {
    int c, x;
};
queue<Node> que;

int Q;

int main() {
    scanf("%d", &Q);
    while (Q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int c, x;
            scanf("%d%d", &c, &x);
            que.push({ c, x });
        }
        else { // op == 2
            int k;
            scanf("%d", &k);
            long long ans = 0;
            while (k > 0) {
                Node& u = que.front(); // ÒýÓÃ
                int tmp = min(k, u.c);
                k -= tmp;
                u.c -= tmp;
                ans += 1ll * tmp * u.x;
                if (u.c == 0)
                    que.pop();
            }
            printf("%lld\n", ans);
        }
    }
    return 0;
}
/*
1 c x
2 k
*/
