#include <bits/stdc++.h>
using namespace std;

struct Haizeix {
    string name; // 姓名

    int year,   // 出生年份
        xb,     // 性别 1:男性，0:女性
        val,    // 能力值
        id,     // 报到顺序
        lv; // 年龄级别 1:小孩子，2:老年人，3:成年人

    void parse(string s) { // 解析函数
        year = stoi(s.substr(6, 4));
        xb = stoi(s.substr(16, 1)) % 2;
        val = stoi(s.substr(18));
        if (2000 - year < 100)
            lv = 1;
        else if (2000 - year > 1000)
            lv = 2;
        else
            lv = 3;
//        cout << "year: " << year << endl;
//        cout << (xb ? "男" : "女") << endl;
//        cout << "val: " << val << endl;
//        cout << "年龄级别：" << lv << endl;
    }

} a[1005];
int n;
string s;

bool cmp(Haizeix a, Haizeix b) {
    if (a.lv != b.lv) // 年龄级别不相等
        return a.lv < b.lv;
    if (a.lv == 1) { // 小孩子
        if (a.year != b.year)
            return a.year > b.year;
        return a.id < b.id;
    }
    if (a.lv == 2) { // 老年人
        if (a.year != b.year)
            return a.year < b.year;
        return a.id < b.id;
    }
    // 成年人：性别不相等
    if (a.xb != b.xb)
        return a.xb == 0;
    if (a.xb == 0) { // 成年女性
        if (a.year != b.year)
            return a.year > b.year;
        return a.id < b.id;
    }
    // 成年男性
    if (a.val != b.val)
        return a.val < b.val;
    return a.id < b.id;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i].id = i;
        cin >> a[i].name >> s;
        a[i].parse(s);
    }
    sort(a+1, a+n+1, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i].name << endl;
    return 0;
}
