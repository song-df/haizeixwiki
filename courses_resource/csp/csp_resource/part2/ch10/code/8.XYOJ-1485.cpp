#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e4 + 5;

int n, w, p[maxn], ans; // ans最多配对数

int main() {
    cin >> w >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    sort(p+1, p+n+1);
    for (int i = 1, j = n; i < j; ) {
        while (j > i && p[i] + p[j] > w)
            j--;
        if (i == j)
            break;
        // i < j && p[i] + p[j] <= w
        ans++; // p[i] -- p[j]
        i++;
        j--;
    }
    cout << n - ans << endl;
    return 0;
}
