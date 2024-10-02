#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

struct Pair {
    int first, second; // x, y
} a[maxn];
int n;

bool cmp(Pair a, Pair b) {
    return a.first < b.first || a.first == b.first && a.second < b.second;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a+1, a+n+1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i].first << " " << a[i].second << endl;
    return 0;
}
