#include <bits/stdc++.h>
using namespace std;

// ż����������ǰ�棬��ż����ͬ�����ִ�С������
bool cmp(int a, int b) {
    if (a % 2 != b % 2)
        return a % 2 == 0;
    return a < b;
}

int main() {
    int a[100] = { 6, 2, 3, 15, 1 };
    sort(a, a+5);   // a[0..4] a+i ���� a[i]�ĵ�ַ
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(a, a+5, greater<int>());
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(a, a+5, cmp);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    // c++11 ��������
    sort(a, a+5, [](int a, int b){
            return a > b;
         });
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    vector<int> vec(5);
    vec[0] = 12;
    vec[1] = 20;
    vec[2] = 7;
    vec[3] = 2;
    vec[4] = 16;
    vec.push_back(5);
    // vec[0..5]
    sort(vec.begin(), vec.end());
    for (auto x : vec)
        cout << x << " ";
    cout << endl;
    return 0;
}
