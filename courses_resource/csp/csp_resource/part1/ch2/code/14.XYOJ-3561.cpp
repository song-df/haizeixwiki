#include <bits/stdc++.h>
using namespace std;
int n, a[25], m;

int main() {
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;
        int p = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == m) {
                p = i;
                break;
            }
        }
        if (p == -1)
            cout << "No" << endl;
        else
            cout << p << endl;
    }
    return 0;
}
