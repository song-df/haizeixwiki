/*************************************************************************
	> File Name: 3.XYOJ-3549.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 三  6/26 20:04:23 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    x = n / 2;
    if (n & 1) x = -x + n;
    else x = -x;
    cout << x << endl;
    return 0;
}
