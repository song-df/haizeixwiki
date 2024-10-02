#include <bits/stdc++.h>
using namespace std;
char s[20020];
int n, maxl, minl = 1e9, p, q; // p×î³¤£¬q×î¶Ì

int main() {
    cin.getline(s, 20020);
    n = strlen(s);
    s[n++] = ' ';
    for (int i = 0, cnt = 0; i < n; i++) {
        if (isalpha(s[i]))
            cnt++;
        else {
            s[i] = 0;
            if (!cnt)
                continue;
            if (cnt > maxl) {
                maxl = cnt;
                p = i - cnt;
            }
            if (cnt < minl) {
                minl = cnt;
                q = i - cnt;
            }
            cnt = 0;
        }
    }
    cout << s+p << endl;
    cout << s+q << endl;
    return 0;
}
