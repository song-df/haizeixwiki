#include <bits/stdc++.h>
using namespace std;
char s[55];

int main() {
    cin >> s;
    int n = strlen(s);
    for (int i = n-1; i >= 0; i--) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] < 'x') s[i] += 3;
            else s[i] -= 23;
            s[i] -= 32;
        }
        else {
            if (s[i] < 'X') s[i] += 3;
            else s[i] -= 23;
            s[i] += 32;
        }
        cout << s[i];
    }
    return 0;
}
