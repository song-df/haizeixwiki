#include <bits/stdc++.h>
using namespace std;
char s[300];
int n, m, p = 1;

int main() {
    cin >> n >> s;
    m = strlen(s);
    if (m != n) {
        cout << "error!" << endl;
        return 0;
    }
    for (int i = 0; s[i]; i++)
        if (s[i] == 'r')
            p++;
    cout << p << endl;
    return 0;
}
