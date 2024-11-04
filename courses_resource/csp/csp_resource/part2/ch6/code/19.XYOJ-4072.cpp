#include <bits/stdc++.h>
using namespace std;
int n, cnt1[105][26], cnt2[105][26];
string s, t;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s >> t;
        for (int j = 0; s[j]; j++)
            cnt1[i][ s[j] - 'a' ]++;
        for (int j = 0; t[j]; j++)
            cnt2[i][ t[j] - 'a' ]++;
    }
    for (int j = 0; j < 26; j++) {
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum += max(cnt1[i][j], cnt2[i][j]);
        cout << sum << endl;
    }
    return 0;
}
