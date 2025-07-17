/*************************************************************************
	> File Name: 4.HZOJ-282.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 二  7/15 16:31:31 2025
 ************************************************************************/

#include <iostream>
using namespace std;

const int maxn = 3200000;
int node[maxn + 5][2];
int root = 1, cnt = 1;
void insert(int x) {
    int p = root;
    for (int i = 30; i >= 0; i--) {
        int ind = (x >> i) & 1;
        if (node[p][ind] == 0) node[p][ind] = ++cnt;
        p = node[p][ind];
    }
    return ;
}

int find(int x) {
    int ans = 0, p = root;
    for (int i = 30; i >= 0; i--) {
        int ind = (x >> i) & 1;
        if (node[p][!ind]) {
            p = node[p][!ind];
            ans += (1 << i);
        } else {
            p = node[p][ind];
        }
    }
    return ans;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        insert(a);
        ans = max(ans, find(a));
    }
    cout << ans << endl;
    return 0;
}
