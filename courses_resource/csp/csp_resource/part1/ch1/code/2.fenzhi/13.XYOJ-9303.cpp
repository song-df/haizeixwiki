/*************************************************************************
	> File Name: 13.XYOJ-9303.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 13:13:40 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double x, y = 0;
    cin >> x;
    y += min(x, 10.0) * 0.1;
    if (x > 10) y += (min(x, 20.0) - 10) * 0.075;
    if (x > 20) y += (min(x, 40.0) - 20) * 0.05;
    if (x > 40) y += (min(x, 60.0) - 40) * 0.03;
    if (x > 60) y += (min(x, 100.0) - 60) * 0.015;
    if (x > 100) y += (x - 100) * 0.01;
    printf("%.2lf\n", y);
    return 0;
}
