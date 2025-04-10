#include <bits/stdc++.h>
using namespace std;

int n;
__int128 f[5050];

void output(__int128 a) {
    if (a / 10 > 0)
        output(a / 10);
    int x = a % 10;
    cout << x;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j <= i*2/3; j++)
            f[i] += f[j];
    }
    output(f[n]);
    return 0;
}
