/*************************************************************************
	> File Name: 15.XYOJ-1129.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 15:40:24 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int a, b = (y - 2 * x) / 2;
    a = x - b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
