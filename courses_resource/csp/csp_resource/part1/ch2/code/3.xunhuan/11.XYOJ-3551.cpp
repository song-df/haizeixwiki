/*************************************************************************
	> File Name: 11.XYOJ-3551.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:41:42 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    double ans = 0;
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        if (i % 2) sum += j;
        else sum -= j;
        ans += 1.0 / sum;
    }
    printf("%.3lf\n", ans);
    return 0;
}
