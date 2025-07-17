/*************************************************************************
	> File Name: 4.P3193.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  7/16 16:50:31 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int n, m, k;
string s;
int nxt[30];
int dp[1000005][30] = {0};

void getNext() {
    nxt[0] = -1;
    for (int i = 1, j = -1; s[i]; i++) {
        while (j != -1 && s[j + 1] != s[i]) j = nxt[j];
        if (s[j + 1] == s[i]) j += 1;
        nxt[i] = j;
    }
    return ;
}

int main() {
    cin >> n >> m >> k;
    cin >> s;
    getNext();
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (char ch = '0'; ch <= '9'; ch++) {
                int p = j - 1;
                while (p != -1 && s[p + 1] != ch) p = nxt[p];
                if (s[p + 1] == ch) p += 1;
                if (p + 1 == m) continue;
                dp[i + 1][p + 1] += dp[i][j];
                dp[i + 1][p + 1] %= k;
            }
        }
    }
    int ans = 0;
    for (int j = 0; j < m; j++) {
        ans += dp[n][j];
        ans %= k;
    }
    cout << ans << endl;
    return 0;
}
