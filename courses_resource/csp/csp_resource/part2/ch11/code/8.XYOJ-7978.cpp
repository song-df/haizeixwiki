#include <bits/stdc++.h>
using namespace std;

int a[22], n, cnt;
bool vis[22];   // vis[x]��ʾ����x��û��ʹ�ù�

// a[1..d-1] �Ѿ�ѡ�ã�����ѡ���еĵ� d ������
void dfs(int d, int L) {
    if (d > L) {
        cnt++;
        if (cnt == n) {
            for (int i = 1; i <= L; i++)
                cout << a[i] << " ";
            exit(0);
        }
        return;
    }
    for (int i = 1; i <= L; i++) {
        if (!vis[i]) {
            a[d] = i;
            vis[i] = true;
            dfs(d+1, L);
            vis[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int L = 1; ; L++)
        dfs(1, L);
    return 0;
}

