#include <bits/stdc++.h>
using namespace std;
char s[110];
int t;

int main() {
    cin >> s >> t;
    t %= 26;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int a = s[i] - 'a';
            s[i] = 'a' + (a + t) % 26;
        }
        else {
            int a = s[i] - 'A';
            s[i] = 'A' + (a + t) % 26;
        }
    }
    cout << s << endl;
    return 0;
}
