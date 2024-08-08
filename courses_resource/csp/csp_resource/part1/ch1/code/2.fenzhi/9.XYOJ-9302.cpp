/*************************************************************************
	> File Name: 9.XYOJ-9302.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 12:16:27 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int y1, y2, m1, m2, d1, d2;
    int y, m, d;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    cin >> y >> m >> d;
    y1 = y1 * 10000 + m1 * 100 + d1;
    y2 = y2 * 10000 + m2 * 100 + d2;
    y = y * 10000 + m * 100 + d;
    if (y1 > y2) {
        y1 ^= y2;
        y2 ^= y1;
        y1 ^= y2;
    }
    if (y >= y1 && y <= y2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
