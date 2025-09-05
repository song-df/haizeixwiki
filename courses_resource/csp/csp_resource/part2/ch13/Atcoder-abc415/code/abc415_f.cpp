#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;

int n, Q, blo; // blo 块的大小
char s[maxn];

int lcnt[1000], rcnt[1000], mxcnt[1000];
char lc[1000], rc[1000], flag[1000];

int id(int x) { // 返回 s[x] 所在的分块的编号
    return (x - 1) / blo + 1;
}

void update(int p) { // 更新第p个分块
    int l = (p-1)*blo+1, r = min(n, p*blo);
    lc[p] = s[l];
    rc[p] = s[r];
    lcnt[p] = 0;
    for (int i = l; i <= r && s[i] == s[l]; i++)
        lcnt[p]++;
    if (lcnt[p] == r-l+1) { // 整个分块字符都相同
        rcnt[p] = mxcnt[p] = r-l+1;
        flag[p] = s[l];
    }
    else {  // 存在不同的字符
        flag[p] = 0;
        rcnt[p] = 0;
        for (int i = r; i >= l && s[i] == s[r]; i--)
            rcnt[p]++;
        mxcnt[p] = 1;
        for (int i = l+1, cnt = 1; i <= r; i++) {
            if (s[i] == s[i-1]) cnt++;
            else cnt = 1;
            mxcnt[p] = max(mxcnt[p], cnt);
        }
    }
}

int query(int l, int r) {
    if (id(l) + 1 >= id(r)) {
        int ans = 1;
        char tmpc = s[l];
        for (int i = l+1, cnt = 1; i <= r; i++) {
            if (s[i] == tmpc)
                cnt++;
            else
                cnt = 1, tmpc = s[i];
            ans = max(ans, cnt);
        }
        return ans;
    }
    // 从 s[l] 处理到 s[l] 所在分块的最后一个字符
    char tmpc = s[l];
    int cnt = 1, ans = 1;
    for (int i = l+1; i <= id(l)*blo; i++) {
        if (s[i] == tmpc)
            cnt++;
        else
            cnt = 1, tmpc = s[i];
        ans = max(ans, cnt);
    }
    // 处理中间完整的每个分块
    for (int i = id(l)+1; i < id(r); i++) { // 第 i 个分块
        if (flag[i] == tmpc) {
            cnt += blo;
            ans = max(ans, cnt);
        }
        else if (flag[i]) {
            tmpc = flag[i];
            cnt = blo;
            ans = max(ans, cnt);
        }
        else { // flag == '\0'
            if (lc[i] == tmpc)
                ans = max(ans, cnt + lcnt[i]);
            ans = max(ans, mxcnt[i]);
            tmpc = rc[i];
            cnt = rcnt[i];
        }
    }
    // 从 s[r] 所在的分块的第一个字符到 s[r]
    for (int i = (id(r)-1)*blo+1; i <= r; i++) {
        if (s[i] == tmpc)
            cnt++;
        else
            cnt = 1, tmpc = s[i];
        ans = max(ans, cnt);
    }
    return ans;
}

int main() {
    scanf("%d%d%s", &n, &Q, s+1);
    blo = sqrt(n);
    for (int i = 1; i <= (n-1)/blo+1; i++)
        update(i); // 更新第i个分块
    while (Q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int i;
            char c[2];
            scanf("%d%s", &i, c);
            s[i] = c[0];
            update(id(i));
        }
        else {
            int l, r;
            scanf("%d%d", &l, &r);
            printf("%d\n", query(l, r));
        }
    }
    return 0;
}
