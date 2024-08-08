/*************************************************************************
	> File Name: 6.XYOJ-7970.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 20:32:08 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= i && cnt <= 4; j++) {
            if (i % j == 0) cnt += 1;
        }
        if (cnt <= 4) ans += 1;
    }
    cout << ans << endl;
    return 0;
}
