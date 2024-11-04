#include <bits/stdc++.h>
using namespace std;
int a[3] = {7, 7, 7}, b = 7, n, cnt;    // b 显示器状态

// 返回当前状态
int f() {
    int res = 0, x = max({a[0], a[1], a[2]});
    if (a[0] == x) res += 4;
    if (a[1] == x) res += 2;
    if (a[2] == x) res++;
    return res;
}

struct Haizeix {
    int day, val;   // day 日期； val 产量变化
    string name;    // name 名字
} c[105];

bool cmp(Haizeix a, Haizeix b) {
    return a.day < b.day;
}
// Bessie，Elsie和Mildred
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> c[i].day >> c[i].name >> c[i].val;
    sort(c+1, c+n+1, cmp);
    for (int i = 1; i <= n; i++) {
        if (c[i].name[0] == 'B')
            a[0] += c[i].val;
        else if (c[i].name[0] == 'E')
            a[1] += c[i].val;
        else
            a[2] += c[i].val;
        if (i == n || c[i].day != c[i+1].day) {
            if (b != f()) {
                b = f();
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
