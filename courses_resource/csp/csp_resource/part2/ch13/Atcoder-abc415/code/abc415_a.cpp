#include <bits/stdc++.h>
using namespace std;

int n, a[110], x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 1; i <= n; i++) {
        if (a[i] == x) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
