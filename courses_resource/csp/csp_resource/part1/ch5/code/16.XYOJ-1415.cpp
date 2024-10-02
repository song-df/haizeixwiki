#include <bits/stdc++.h>
using namespace std;

struct Class {
    int id, cnt;
} a[1005];
int n, x;

bool cmp(Class a, Class b) {
//    if (a.cnt != b.cnt)
//        return a.cnt > b.cnt;
//    return a.id < b.id;
    return a.cnt > b.cnt || a.cnt == b.cnt && a.id < b.id;
}

int main() {
    for (int i = 1; i <= 1000; i++)
        a[i].id = i;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x].cnt++;
    }
    // a[1..1000]
    sort(a+1, a+1001, cmp);
    for (int i = 1; i <= 1000 && a[i].cnt; i++) {
        if (i > 1)
            cout << "->";
        cout << a[i].id;
    }
    return 0;
}
