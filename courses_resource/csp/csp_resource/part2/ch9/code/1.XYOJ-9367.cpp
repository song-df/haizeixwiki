#include <bits/stdc++.h>
using namespace std;
int n, f[505]; // f[0] = 1

int main() {
    cin >> n;
    f[1] = 2;
    for (int i = 2; i <= n; i++)
        f[i] = f[i-1] + 2 * (i-1); // ���ƹ�ʽ
    cout << f[n] << endl; // n��������ߵõ���ƽ����
    return 0;
}

