#include <bits/stdc++.h>
using namespace std;

int n, q, x, cnt[105]; // cnt[i] ��ʾ���Ϊ i �ĺ�����Ŀǰ�������

int main() {
    cin >> n >> q;
    while (q--) {
        cin >> x;
        if (!x) { // ���� x = 0
            for (int i = 1; i <= n; i++)
                if (x == 0 || cnt[i] < cnt[x])
                    x = i;
        }
        cnt[x]++;
        cout << x << " ";
    }
    return 0;
}
