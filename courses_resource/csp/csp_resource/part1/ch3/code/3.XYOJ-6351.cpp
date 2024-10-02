#include <bits/stdc++.h>
using namespace std;
char s[110], t[110];

int main() {
    cin >> s;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        t[i] = s[i] + s[(i+1)%n];
    cout << t << endl;
    return 0;
}
