/*************************************************************************
	> File Name: 1.XYOJ-1109.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 10:48:15 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, flag = 0;
    double x;
    cin >> m;
    if (m <= 30) {
        x = m * 0.2;
    } else if (m <= 60) {
        x = 0.2 * 30 + (m - 30) * 0.6;
    } else {
        x = -1;
    }
    if (x < 0) cout << "NO" << endl;
    else printf("%.2lf\n", x);
    return 0;
}
