#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    for (int i = 1; i <= 5; i++)
        ms.insert(7);
    ms.insert(15);
    ms.insert(15);
    ms.insert(1);
    ms.insert(2);
    ms.insert(9);
    for (auto x : ms)
        cout << x << " ";
    cout << endl;
    // cout << ms.count(15) << endl;   // ��� 2
    // ms.erase(7); // ɾ�����е�7
    // ����ɾ��һ��7
    ms.erase(ms.find(7));
    for (auto x : ms)
        cout << x << " ";
    cout << endl;
    return 0;
}
