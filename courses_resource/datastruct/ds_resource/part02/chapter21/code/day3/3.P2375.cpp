/*************************************************************************
	> File Name: 3.P2375.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  7/16 16:04:43 2025
 ************************************************************************/

#include <iostream>
using namespace std;

#define int long long
const int mod = 1e9+7; 
string s;
int nxt[1000005], ans[1000005], nums[1000005];

void getNext() {
    nxt[0] = -1; ans[0] = 1;
    for (int i = 1, j = -1; s[i]; i++) {
        while (j != -1 && s[j + 1] != s[i]) j = nxt[j];
        if (s[j + 1] == s[i]) j += 1;
        nxt[i] = j;
        if (j == -1) ans[i] = 1;
        else ans[i] = ans[j] + 1;
    }
    for (int i = 0, j = -1; s[i]; i++) {
        while (j != -1 && (s[j + 1] != s[i] || (j + 2) * 2 > i + 1)) j = nxt[j];
        if (s[j + 1] == s[i] && (j + 2) * 2 <= i + 1) j += 1;
        if (j == -1) nums[i] = 0;
        else nums[i] = ans[j];
    }
    return ;
}

void solve() {
    cin >> s;
    getNext();
    int ans = 1;
    for (int i = 0; s[i]; i++) {
        ans *= (nums[i] + 1);
        ans %= mod;
    }
    cout << ans << endl;
    return ;
}

int32_t main() {
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

