/*************************************************************************
	> File Name: 8.XYOJ-8360.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 14:22:00 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = abs(a - c);
    int y = abs(b - d);
    cout << max(x, y) << endl;
    return 0;
}
