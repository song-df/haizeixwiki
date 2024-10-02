#include <bits/stdc++.h>
using namespace std;
int n;
char s[22], t[22];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s >> t;
        if (s[0]=='R' && t[0]=='S' || s[0]=='S' && t[0]=='P' || s[0]=='P' && t[0]=='R')
            cout << "Player1" << endl;
        else if (s[0] == t[0])
            cout << "Tie" << endl;
        else
            cout << "Player2" << endl;
    }
    return 0;
}

