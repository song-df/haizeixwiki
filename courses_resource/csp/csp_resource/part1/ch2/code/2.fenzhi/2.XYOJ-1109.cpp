/*************************************************************************
	> File Name: 2.XYOJ-1109.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 10:53:14 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m;
    double x = 0;
    cin >> m;
    x += min(m, 30) * 0.2;
    if (m > 30) x += min(m - 30, 30) * 0.6;
    if (m > 60) x = -1;
    if (x < 0) cout << "NO" << endl;
    else printf("%.2lf\n", x);
    return 0;
}
