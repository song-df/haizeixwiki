#include <bits/stdc++.h>
using namespace std;
int n, a[1005], ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        int cnt = 0;    // �� a[i] ��ʼ����ж��ٸ������ĵ���a[i]������
        for (int j = i; j <= n && a[j] == a[i]; j++)
            cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
