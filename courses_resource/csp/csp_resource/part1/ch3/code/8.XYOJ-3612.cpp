#include <bits/stdc++.h>
using namespace std;
char a[1010], b[1010], c[1010];
int la, lb, lc;

int main() {
    cin >> a >> b >> c;
    la = strlen(a);
    lb = strlen(b);
    lc = strlen(c);
    for (int i = 0; i < la; ) {
        //  a[i..i+lb-1] == b
        if (!strncmp(a+i, b, lb)) {
            cout << c;
            i += lb;
        }
        else
            cout << a[i++];
    }
    return 0;
}
