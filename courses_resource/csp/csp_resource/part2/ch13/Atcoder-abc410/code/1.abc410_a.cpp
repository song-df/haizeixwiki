#include <bits/stdc++.h>
using namespace std;

int n, a[105], k, cnt; // cnt ͳ���ж��ٸ� a[i] >= k

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (int i = 1; i <= n; i++)
        if (k <= a[i])
            cnt++;
    cout << cnt << endl;
    return 0;
}
