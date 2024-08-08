/*************************************************************************
	> File Name: 12.XYOJ-15728.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  7/21 21:53:24 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long n, a = 1, b = 0, c, sum = 0;
    double ans = 0;
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        c = a + b;
        if (i % 2 == 1) sum += j;
        else sum -= j;
        ans += 1.0 * c / sum;
        a = b;
        b = c;
    }
    printf("%.2lf\n", ans);
    return 0;
}
