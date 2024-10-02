#include <bits/stdc++.h>
using namespace std;
char s[550];

int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'A')
            cout << 'T';
        else if (s[i] == 'T')
            cout << 'A';
        else if (s[i] == 'C')
            cout << 'G';
        else
            cout << 'C';
    }
    return 0;
}
