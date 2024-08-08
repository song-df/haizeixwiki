/*************************************************************************
	> File Name: 8.XYOJ-3302.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 21:12:28 2024
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double m, b;
    long long x = 0, y, ans = 0;
    cin >> m >> b;
    while (x <= b / m) {
        y = floor(-x / m + b);
        long long temp = (1 + x) * x / 2 * (y + 1) + (1 + y) * y / 2 * (x + 1);
        if (temp > ans) ans = temp;
        x += 1;
    }
    cout << ans << endl;
    return 0;
}
