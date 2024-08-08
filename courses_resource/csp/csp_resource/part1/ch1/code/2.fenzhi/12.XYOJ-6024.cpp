/*************************************************************************
	> File Name: 12.XYOJ-6024.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 13:08:19 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, y = 0;
    char c;
    cin >> n >> c;
    y += 8;
    if (n > 1000) y += (n - 1000 + 499) / 500 * 4;
    if (c == 'y') y += 5;
    cout << y << endl;
    return 0;
}
