#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;

int n, Q, blo; // blo ��Ĵ�С
char s[maxn];

int lcnt[1000], rcnt[1000], mxcnt[1000];
char lc[1000], rc[1000], flag[1000];

int id(int x) { // ���� s[x] ���ڵķֿ�ı��
    return (x - 1) / blo + 1;
}

void update(int p) { // ���µ�p���ֿ�
    int l = (p-1)*blo+1, r = min(n, p*blo);
    lc[p] = s[l];
    rc[p] = s[r];
    lcnt[p] = 0;
    for (int i = l; i <= r && s[i] == s[l]; i++)
        lcnt[p]++;
    if (lcnt[p] == r-l+1) { // �����ֿ��ַ�����ͬ
        rcnt[p] = mxcnt[p] = r-l+1;
        flag[p] = s[l];
    }
    else {  // ���ڲ�ͬ���ַ�
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
    // �� s[l] ���� s[l] ���ڷֿ�����һ���ַ�
    char tmpc = s[l];
    int cnt = 1, ans = 1;
    for (int i = l+1; i <= id(l)*blo; i++) {
        if (s[i] == tmpc)
            cnt++;
        else
            cnt = 1, tmpc = s[i];
        ans = max(ans, cnt);
    }
    // �����м�������ÿ���ֿ�
    for (int i = id(l)+1; i < id(r); i++) { // �� i ���ֿ�
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
    // �� s[r] ���ڵķֿ�ĵ�һ���ַ��� s[r]
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
        update(i); // ���µ�i���ֿ�
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
