#include <bits/stdc++.h>
using namespace std;

struct Haizeix {
    string name; // ����

    int year,   // �������
        xb,     // �Ա� 1:���ԣ�0:Ů��
        val,    // ����ֵ
        id,     // ����˳��
        lv; // ���伶�� 1:С���ӣ�2:�����ˣ�3:������

    void parse(string s) { // ��������
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
//        cout << (xb ? "��" : "Ů") << endl;
//        cout << "val: " << val << endl;
//        cout << "���伶��" << lv << endl;
    }

} a[1005];
int n;
string s;

bool cmp(Haizeix a, Haizeix b) {
    if (a.lv != b.lv) // ���伶�����
        return a.lv < b.lv;
    if (a.lv == 1) { // С����
        if (a.year != b.year)
            return a.year > b.year;
        return a.id < b.id;
    }
    if (a.lv == 2) { // ������
        if (a.year != b.year)
            return a.year < b.year;
        return a.id < b.id;
    }
    // �����ˣ��Ա����
    if (a.xb != b.xb)
        return a.xb == 0;
    if (a.xb == 0) { // ����Ů��
        if (a.year != b.year)
            return a.year > b.year;
        return a.id < b.id;
    }
    // ��������
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
