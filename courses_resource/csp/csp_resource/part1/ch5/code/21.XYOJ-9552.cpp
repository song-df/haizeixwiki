#include <bits/stdc++.h>
using namespace std;
int n, a[105][105];

// 返回第 i 行的最小值所在的列
int row_min(int i) {
    int p = 1;
    for (int j = 2; j <= n; j++)
        if (a[i][j] < a[i][p])
            p = j;
    return p; // a[i][p] 时第 i 行最小的
}

// 返回第 j 列的最大值所在的行
int col_max(int j) {
    int p = 1;
    for (int i = 2; i <= n; i++)
        if (a[i][j] > a[p][j])
            p = i;
    return p;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++) {
        swap(a[i][row_min(i)], a[col_max(i)][i]);
        sort(a[i]+1, a[i]+n+1);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
