#include <bits/stdc++.h>
using namespace std;
int n;
long long f[1010] = {1};

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= i/2; j++)
            f[i] += f[j];
    cout << f[n] << endl;
    return 0;
}
