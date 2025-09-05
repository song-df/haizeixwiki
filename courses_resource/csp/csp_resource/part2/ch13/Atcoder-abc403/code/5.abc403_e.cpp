#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;

struct Node {
    int son[26], p, cnt, flag;
} tr[maxn];
int rt = 1, idx = 1, ans;

int Q, t;
char s[maxn];

void ins_x() {
    int u = 1;
    for (int i = 0; s[i]; i++) {
        int x = s[i] - 'a';
        if (!tr[u].son[x]) {
            tr[u].son[x] = ++idx;
            tr[idx].p = u;
        }
        u = tr[u].son[x];
        if (tr[u].flag)
            return;
    }
    int cnt = tr[u].cnt;
    ans -= cnt;
    tr[u].flag = 1;
    if (cnt > 0) {
        for (; u != 1; u = tr[u].p)
            tr[u].cnt -= cnt;
    }
}

void ins_y() {
    int u = 1;
    for (int i = 0; s[i]; i++) {
        int x = s[i] - 'a';
        if (!tr[u].son[x]) {
            tr[u].son[x] = ++idx;
            tr[idx].p = u;
        }
        u = tr[u].son[x];
        if (tr[u].flag)
            return;
    }
    for (; u != 1; u = tr[u].p)
        tr[u].cnt++;
    ans++;
}

int main() {
    scanf("%d", &Q);
    while (Q--) {
        scanf("%d%s", &t, s);
        if (t == 1) ins_x();
        else ins_y();
        printf("%d\n", ans);
    }
    return 0;
}
