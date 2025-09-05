#include <bits/stdc++.h>
using namespace std;

string s;
int n, cnt;

int main() {
    cin >> s;
    n = s.size();
    s = " " + s; // s[0]=' ' s[1..n]
    for (int i = 1; i <= n; i++) {
        if (s[i] == '#') {
            cout << i;
            cnt++;
            if (cnt % 2)
                cout << ",";
            else
                cout << endl;
        }
    }
    return 0;
}
