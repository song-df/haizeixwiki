#include <bits/stdc++.h>
using namespace std;

int n, m, p[11], ans = 1e9;    // p[x] ��ʾ���еĵ�x��������x���ڵ㣩�ı��
bool g[11][11];     // g[x][y] ��ʾ��ʼ��ͼ��x��y֮���Ƿ���һ����
bool vis[11];

// ���أ��½�cnt���ߵ�����£���������
int cal(int cnt) {
//    cout << "cal cnt = " << cnt << endl;
    return cnt + (m + cnt - n);
}

// ��ǰ������Ŀ�ͷ�Ľڵ��ǵ�y���ڵ㣬����ѡ�����еĵ�x���ڵ�
void dfs(int y, int x, int cnt) {   // ��֮ǰ�Ѿ��½��˶������� g[a][b]=false, a--b
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            p[x] = i;
            if (x == n) {
                if (x - y >= 2) {
                    int tmp = cnt;
                    if (!g[ p[x-1] ][ p[x] ])
                        tmp++;
                    if (!g[ p[y] ][ p[x] ])
                        tmp++;
                    ans = min(ans, cal(tmp));
                }
                return;
            }
            // ���ݣ����
            vis[i] = true;
            int tmp = cnt;
            if (y < x) {
                // p[x-1] -- p[x]
                if (!g[ p[x-1] ][ p[x] ])
                    tmp++;
            }
            dfs(y, x+1, tmp);
            if (x - y >= 2) {
                if (!g[ p[y] ][ p[x] ])
                    tmp++;
                dfs(x+1, x+1, tmp);
            }
            vis[i] = false; // �������
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        g[u][v] = g[v][u] = true;
    }
    dfs(1, 1, 0);
    cout << ans << endl;
    return 0;
}
