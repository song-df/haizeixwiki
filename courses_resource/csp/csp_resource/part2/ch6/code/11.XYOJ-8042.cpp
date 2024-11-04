#include <bits/stdc++.h>
using namespace std;

int m, cnt;

int main() {
    cin >> m;
    for (int i = 1; i <= m; i *= 2)
        cnt++;
    cout << cnt << endl;
    return 0;
}
