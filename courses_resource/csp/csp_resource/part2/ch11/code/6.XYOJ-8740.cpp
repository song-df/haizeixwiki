#include <bits/stdc++.h>
using namespace std;

int dfs(int n) {
    int res = 1;    // n = n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // n = i * (..n/i..)
            res += dfs(n/i);
            // n = (n/i) * (..i..)
            if (i * i < n)
                res += dfs(i);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << dfs(n) << endl;
    return 0;
}
