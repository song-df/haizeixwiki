#include <bits/stdc++.h>
using namespace std;
char a[505], b[505];
double c;
int n, cnt; // cnt / n >= c

int main() {
    cin >> c >> a >> b;
    n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i])
            cnt++;
    }
    if (1.0 * cnt / n >= c)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
