#include <bits/stdc++.h>
using namespace std;
int n, a, cnt[1005], x;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        x = max(x, ++cnt[a]);
    } // x: ���ִ��������Ǹ����ĳ��ִ���
    for (int i = 0; i <= 1000; i++) {
        if (cnt[i] == x) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
