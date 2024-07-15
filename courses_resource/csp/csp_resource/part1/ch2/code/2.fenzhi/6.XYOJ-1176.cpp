/*************************************************************************
	> File Name: 6.XYOJ-1176.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 一  6/17 11:35:31 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    cin >> a >> b >> r;
    if (a >= 2 * r && b >= 2 * r) cout << "Alice win" << endl;
    else cout << "Bob win" << endl;
    return 0;
}
