/*************************************************************************
	> File Name: 3.XYOJ-9304.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 10:59:29 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x;
    double y;
    cin >> x;
    if (x < 2) y = x;
    else if (x < 6) y = x * x + 1;
    else if (x < 10) y = sqrt(x + 1);
    else y = 1.0 / (x + 1);
    printf("%.2lf\n", y);
    return 0;
}
