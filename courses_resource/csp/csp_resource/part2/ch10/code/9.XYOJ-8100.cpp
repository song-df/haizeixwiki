#include <bits/stdc++.h>
using namespace std;

struct Person {
    int id, t;
} p[1010];

bool cmp(Person a, Person b) {
    return a.t < b.t || a.t == b.t && a.id < b.id;
}

int n;
double ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].t;
        p[i].id = i;
    }
    sort(p+1, p+n+1, cmp);
    for (int i = 1; i <= n; i++)
        cout << p[i].id << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
        ans += (n - i) * p[i].t;
    printf("%.2lf\n", ans / n);
    return 0;
}
