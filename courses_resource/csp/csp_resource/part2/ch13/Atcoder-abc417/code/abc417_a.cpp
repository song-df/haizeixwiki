#include <bits/stdc++.h>
using namespace std;

int n, a, b;
char s[25];

int main() {
    cin >> n >> a >> b >> s+1;
    for (int i = a+1; i <= n-b; i++)
        cout << s[i];
    return 0;
}
