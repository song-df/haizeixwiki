#include <bits/stdc++.h>
using namespace std;
const long long mod = 998244353;

struct Node {
    int son[26], stat, fail;
} tr[100];
int idx;

int n, L, nxt[100][26];
string s; // 0 ~ n-1
long long f[105][100][1<<8];

void ins(string &s, int id) {
    int u = 0;
    for (auto c : s) {
        int id = c - 'a';
        if (!tr[u].son[id])
            tr[u].son[id] = ++idx;
        u = tr[u].son[id];
    }
    tr[u].stat |= 1<<id;
}

void build() {
    queue<int> que;
    for (int i = 0; i < 26; i++) {
        int u = tr[0].son[i];
        if (u) que.push(u);
    }
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        tr[u].stat |= tr[ tr[u].fail ].stat;
        for (int i = 0; i < 26; i++) {
            int v = tr[u].son[i];
            if (!v) continue;
            int x = tr[u].fail;
            while (x && !tr[x].son[i])
                x = tr[x].fail;
            if (tr[x].son[i])
                x = tr[x].son[i];
            tr[v].fail = x;
            que.push(v);
        }
    }
}

void cal_nxt() {
    for (int u = 0; u <= idx; u++) {
        for (int i = 0; i < 26; i++) {
            int v = tr[u].son[i];
            if (!v) {
                int x = tr[u].fail;
                while (x && !tr[x].son[i])
                    x = tr[x].fail;
                if (tr[x].son[i])
                    x = tr[x].son[i];
                v = x;
            }
            nxt[u][i] = v;
        }
    }
}

int main() {
    cin >> n >> L;
    for (int i = 0; i < n; i++) {
        cin >> s;
        ins(s, i);
    }
    build();
    cal_nxt();
    f[0][0][0] = 1;
    for (int step = 0; step < L; step++) {
        for (int u = 0; u <= idx; u++) {
            for (int st = 0; st < (1<<n); st++) {
                if (!f[step][u][st])
                    continue;
                for (int i = 0; i < 26; i++) { // µÚstep+1¸ö×Ö·ûÊÇi
                    int v = nxt[u][i];
                    int st2 = st | tr[v].stat;
                    f[step+1][v][st2] += f[step][u][st];
                    f[step+1][v][st2] %= mod;
                }
            }
        }
    }
    long long ans = 0;
    for (int u = 0; u <= idx; u++)
        ans = (ans + f[L][u][(1<<n)-1]) % mod;
    cout << ans << endl;
    return 0;
}
