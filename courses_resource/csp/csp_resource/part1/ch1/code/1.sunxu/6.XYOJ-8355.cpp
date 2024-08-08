/*************************************************************************
	> File Name: 6.XYOJ-8355.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 14:14:40 2024
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    printf("%.2lf\n", ans);
    return 0;
}
