#include <bits/stdc++.h>
using namespace std;
int n, a[22], cnt[11], x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i <= 10; i++)
        x = max(x, cnt[i]); // x�����ִ��������Ǹ����ĳ��ִ���
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] == x) {
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}
