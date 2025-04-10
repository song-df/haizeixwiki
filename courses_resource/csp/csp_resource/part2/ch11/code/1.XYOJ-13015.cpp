#include <bits/stdc++.h>
using namespace std;
int n, m, cnt1, cnt2, ans1, ans2;
bool vis[255][255];
char s[255][255];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1}; // ÉÏÏÂ×óÓÒ

bool in_map(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y) {
	vis[x][y] = true;
	if (s[x][y] == 'o')
		cnt1++;
	else if (s[x][y] == 'v')
		cnt2++;
	for (int i = 0; i < 4; i++) {	// (x,y)->(xx,yy)
		int xx = x + dir[i][0], yy = y + dir[i][1];
		if (in_map(xx, yy) && s[xx][yy] != '#' && !vis[xx][yy])
			dfs(xx, yy);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] != '#' && !vis[i][j]) {
				cnt1 = cnt2 = 0;
				dfs(i, j);
				if (cnt1 > cnt2)
					ans1 += cnt1;
				else
					ans2 += cnt2;
			}
		}
	}
	cout << ans1 << " " << ans2;
	return 0;
}
