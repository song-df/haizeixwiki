#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a.begin(), a.end());
    for (auto x : a)
        printf("%d ", x);
    return 0;
}
