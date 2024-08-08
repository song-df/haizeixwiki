/*************************************************************************
	> File Name: 7.XYOJ-8359.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 14:19:22 2024
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = abs(a - c);
    int y = abs(b - d);
    cout << x + y << endl;
    return 0;
}
