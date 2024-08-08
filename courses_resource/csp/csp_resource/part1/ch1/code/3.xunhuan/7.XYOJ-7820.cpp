/*************************************************************************
	> File Name: 7.XYOJ-7820.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 20:46:30 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, T, ans = 1000000001, flag = 0;
    cin >> n >> T;
    for (int i = 1; i <= n; i++) {
        int t, c;
        cin >> c >> t;
        if (t > T) continue;
        flag = 1;
        if (c < ans) ans = c;
    }
    if (flag == 0) cout << "TLE" << endl;
    else cout << ans << endl;
    return 0;
}
