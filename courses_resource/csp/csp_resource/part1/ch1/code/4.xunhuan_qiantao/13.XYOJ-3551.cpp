/*************************************************************************
	> File Name: 13.XYOJ-3551.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 22:06:06 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    double ans = 0;
    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        if (i % 2 == 1) sum += j;
        else sum -= j;
        ans += 1.0 / sum;
    }
    printf("%.3lf\n", ans);
    return 0;
}
