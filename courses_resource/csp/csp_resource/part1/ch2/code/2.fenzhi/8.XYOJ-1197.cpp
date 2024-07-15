/*************************************************************************
	> File Name: 8.XYOJ-1197.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 12:10:02 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int r1 = (c / a * 3) + c % a / b;
    int r2 = (c - a) / b + 3;
    if (c < a) cout << 0 << endl;
    else if (r1 > r2) cout << r1 << endl;
    else cout << r2 << endl;
    return 0;
}

