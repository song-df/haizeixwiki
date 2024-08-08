/*************************************************************************
	> File Name: 7.XYOJ-1179.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 11:41:52 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, step;
    cin >> a >> b >> step;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    step -= a + b;
    if (step < 0 || step % 2) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
