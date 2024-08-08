/*************************************************************************
	> File Name: 15.XYOJ-3686.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 22:33:57 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == m || j == 1 || j == n) {
                cout << "*";
                cnt += 1;
            }
            else cout << " ";
        }
        cout << endl;
    }
    cout << cnt << endl;
    return 0;
}
