#include <bits/stdc++.h>
using namespace std;

struct Student {
    char name[11];
    int a, b, c;
} a[1005];
int n;

bool check(Student a, Student b) {
    return abs(a.a - b.a) <= 5 && abs(a.b - b.b) <= 5 && abs(a.c - b.c) <= 5
            && abs(a.a + a.b + a.c - b.a - b.b - b.c) <= 10;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (check(a[i], a[j]))
                cout << a[i].name << " " << a[j].name << endl;
    return 0;
}
