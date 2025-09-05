#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

string s[15], t[maxn];
int n, k, x, idx, a[15]; // t[++idx]

void dfs(int d) { // —° a[d]
    if (d > k) {
        idx++;
        for (int i = 1; i <= k; i++)
            t[idx] += s[a[i]];
        return;
    }
    for (int i = 1; i <= n; i++) {
        a[d] = i;
        dfs(d+1);
    }
}

int main() {
    cin >> n >> k >> x;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    dfs(1);
    // ∂‘ t[1..idx] ≈≈–Ú
    sort(t+1, t+idx+1);
    cout << t[x] << endl;
    return 0;
}
