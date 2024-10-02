#include <bits/stdc++.h>
using namespace std;
char s[110];
int t;

int main() {
    cin >> s >> t;
    t %= 26;
    for (int i = 0; s[i]; i++) {
        for (int j = 1; j <= t; j++) {
            if (s[i] == 'z')
                s[i] = 'a';
            else if (s[i] == 'Z')
                s[i] = 'A';
            else
                s[i]++;
        }
    }
    cout << s << endl;
    return 0;
}
