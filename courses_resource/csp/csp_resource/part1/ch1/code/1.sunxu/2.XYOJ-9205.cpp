/*************************************************************************
	> File Name: 2.XYOJ-9205.cpp
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 日  6/16 13:29:51 2024
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = ((a * b) + (b * c) + (a * c)) * 2;
    int ans2 = a * b * c;
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
