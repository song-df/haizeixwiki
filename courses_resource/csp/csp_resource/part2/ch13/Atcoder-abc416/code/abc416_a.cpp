#include <bits/stdc++.h>
using namespace std;

int n, L, R;
char s[105];

int main() {
    cin >> n >> L >> R >> s+1; // s[1..n]
    for (int i = L; i <= R; i++) {
        if (s[i] != 'o') {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
