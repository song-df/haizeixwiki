#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name; // name����
    int id, a, b; // id�ڼ������� a���� b��ѧ
} a[105];
int n;

// ���� true ʱ˵�� a Ӧ������ b ��ǰ��
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
