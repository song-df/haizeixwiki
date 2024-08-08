/*************************************************************************
	> File Name: 17.XYOJ-9638.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 23:11:07 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n;
    for (int x = 0; x <= n / a; x++) {
        int r = n - x * a;
        ans = min(ans, r - r / b * b);
    }
    cout << ans << endl;
    return 0;
}
