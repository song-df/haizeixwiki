#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name; // name姓名
    int id, a, b; // id第几个输入 a语文 b数学
} a[105];
int n;

// 返回 true 时说明 a 应该排在 b 的前面
bool cmp(Student a, Student b) {
    if (a.a + a.b != b.a + b.b)
        return a.a + a.b > b.a + b.b;
    return a.id < b.id;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].a >> a[i].b;
        a[i].id = i;
    }
    sort(a+1, a+n+1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i].name << " " << a[i].a << " "
            << a[i].b << " " << a[i].a + a[i].b << endl;
    return 0;
}
